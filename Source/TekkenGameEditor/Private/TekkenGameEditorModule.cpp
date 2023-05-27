#include "TekkenGameEditorModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "Paper2DEditor"

//////////////////////////////////////////////////////////////////////////
// FPaper2DEditor

class FTekkenGameEditor : public ITekkenGameEditorModule
{
public:
	FTekkenGameEditor()
		: TekkenGameAssetCategoryBit(EAssetTypeCategories::Misc)
	{
	}

	virtual uint32 GetTekkenGameAssetCategory() const override { return TekkenGameAssetCategoryBit; }
	// End of IPaper2DEditorModule

private:
	
	/** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	EAssetTypeCategories::Type TekkenGameAssetCategoryBit;

public:
	
	virtual void StartupModule() override
	{
		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
		TekkenGameAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("TekkenGame")),
			LOCTEXT("TekkenGameAssetCategory", "TekkenGame"));

		RegisterAssetTypeAction(AssetTools, MakeShareable(new FAuraCharacterItemAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterExtraItemsAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemSetAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemSocketAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemTexAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemVariationAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCharacterItemOffsetVariationAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCustomizeCharacterItemAssetTypeActions(TekkenGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FEffectCharacterItemAssetTypeActions(TekkenGameAssetCategoryBit)));
	}

	virtual void ShutdownModule() override
	{

		// Unregister the details customization
		//@TODO: Unregister them

		// Unregister all the asset types that we registered
		if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
		{
			IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
			for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
			{
				AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
			}
		}
		
		CreatedAssetTypeActions.Empty();
	}
private:
	
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}
};

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FTekkenGameEditor, TekkenGameEditor);

#undef LOCTEXT_NAMESPACE
