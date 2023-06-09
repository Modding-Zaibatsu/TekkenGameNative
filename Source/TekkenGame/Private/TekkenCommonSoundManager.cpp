#include "TekkenGameModule.h"
#include "TekkenCommonSoundManager.h"

ATekkenCommonSoundManager::ATekkenCommonSoundManager() {
    this->SndRound1 = NULL;
    this->SndRound2 = NULL;
    this->SndRound3 = NULL;
    this->SndRound4 = NULL;
    this->SndRound5 = NULL;
    this->SndRound6 = NULL;
    this->SndRound7 = NULL;
    this->SndRound8 = NULL;
    this->SndRound9 = NULL;
    this->SndFinalRound = NULL;
    this->SndReady = NULL;
    this->SndFight = NULL;
    this->SndKO = NULL;
    this->SndDoubleKO = NULL;
    this->SndTimeUp = NULL;
    this->SndPerfect = NULL;
    this->SndGreat = NULL;
    this->SndYouWin = NULL;
    this->SndWin = NULL;
    this->SndWins = NULL;
    this->SndYouLose = NULL;
    this->SndLose = NULL;
    this->SndLoses = NULL;
    this->SndDraw = NULL;
    this->SndSECancel = NULL;
    this->SndSECoin = NULL;
    this->SndSEDecide = NULL;
    this->SndSERannyuu = NULL;
    this->SndSESelect = NULL;
    this->SndSEStart = NULL;
    this->SndPlayGetReady = NULL;
    this->SndPlayContinu = NULL;
    this->SndPlayNewChallanger = NULL;
    this->SndPlayGameOver = NULL;
    this->SndPlayChicken = NULL;
    this->SndPlayGreatChicken = NULL;
    this->SndPlayGoodMorning = NULL;
    this->SndPlayKingOfIronFistTournament = NULL;
    this->SndPlayWelcomeToKingOfIronFistTournament7 = NULL;
    this->SndSE_VS1 = NULL;
    this->SndSE_VS2 = NULL;
    this->SndSE_VS3 = NULL;
    this->SndHit01 = NULL;
    this->SndRES_BANK_SYVO_CHICKEN = NULL;
    this->Sndsyvo_great = NULL;
    this->SndRES_BANK_SYVO_CNT00 = NULL;
    this->SndRES_BANK_SYVO_CNT01 = NULL;
    this->SndRES_BANK_SYVO_CNT02 = NULL;
    this->SndRES_BANK_SYVO_CNT03 = NULL;
    this->SndRES_BANK_SYVO_CNT04 = NULL;
    this->SndRES_BANK_SYVO_CNT05 = NULL;
    this->SndRES_BANK_SYVO_CNT06 = NULL;
    this->SndRES_BANK_SYVO_CNT07 = NULL;
    this->SndRES_BANK_SYVO_CNT08 = NULL;
    this->SndRES_BANK_SYVO_CNT09 = NULL;
    this->SndRES_BANK_SYVO_CNT10 = NULL;
    this->SndRES_BANK_PCH_WK02 = NULL;
    this->SndRES_BANK_PCH_MD01 = NULL;
    this->SndRES_BANK_PCH_SG01 = NULL;
    this->SndRES_BANK_PCH_LT01 = NULL;
    this->SndRES_BANK_KCK_WK01 = NULL;
    this->SndRES_BANK_KCK_SG01 = NULL;
    this->SndRES_BANK_KCK_LT01 = NULL;
    this->SndRES_BANK_PCH_FC01 = NULL;
    this->SndRES_BANK_PCH_FC02 = NULL;
    this->SndRES_BANK_PCH_FC03 = NULL;
    this->SndRES_BANK_PCH_LT02 = NULL;
    this->SndRES_BANK_PCH_HONE02 = NULL;
    this->SndRES_BANK_GRD_MD01 = NULL;
    this->SndRES_BANK_DWN_HVY01 = NULL;
    this->SndRES_BANK_DWN_HVY02 = NULL;
    this->SndRES_BANK_BNE_BRK03 = NULL;
    this->SndRES_BANK_WND_LT01 = NULL;
    this->SndRES_BANK_WND_WK01 = NULL;
    this->SndRES_BANK_WND_WK02 = NULL;
    this->SndRES_BANK_WND_WK03 = NULL;
    this->SndRES_BANK_WND_MD01 = NULL;
    this->SndRES_BANK_WND_MD02 = NULL;
    this->SndRES_BANK_DWN_HVY03 = NULL;
    this->SndRES_BANK_BNE_BRK01 = NULL;
    this->SndRES_BANK_BNE_BRK02 = NULL;
    this->SndRES_BANK_BNE_BRK04 = NULL;
    this->SndRES_BANK_PCH_HONE01 = NULL;
    this->SndRES_BANK_SYVO_OOPS = NULL;
    this->SndRES_BANK_DWMK = NULL;
    this->SndRES_BANK_SPK_L01 = NULL;
    this->SndRES_BANK_SPK_M01 = NULL;
    this->SndRES_BANK_SPK_S01 = NULL;
    this->SndFX_HIT_M01 = NULL;
    this->SndFX_HIT_M02 = NULL;
    this->SndFX_HIT_M03 = NULL;
    this->SndFX_HIT_M04 = NULL;
    this->SndFX_HIT_M05 = NULL;
    this->SndFX_HIT_M06 = NULL;
    this->SndFX_HIT_L01 = NULL;
    this->SndFX_HIT_L02 = NULL;
    this->SndFX_HIT_L03 = NULL;
    this->SndFX_HIT_L04 = NULL;
    this->SndFX_HIT_L05 = NULL;
    this->SndC04YOS_YOS_ROUND = NULL;
    this->Sndhanyo_hand = NULL;
    this->Sndhanyo_hi_hirate = NULL;
    this->Sndhanyo_hi_fist = NULL;
    this->Sndhanyo_hi_cross = NULL;
    this->Snd_s_itm_stop_wan = NULL;
    this->Snd_s_itm_stop_jac = NULL;
    this->Snd_s_itm_stop_rav = NULL;
    this->Snd_s_itm_stop_uju = NULL;
    this->Snd_s_itm_stop_alx = NULL;
    this->Snd_s_itm_stop_knm = NULL;
    this->Snd_s_itm_stop_wan_FL = NULL;
    this->Snd_s_itm_stop_rav_knm = NULL;
    this->Snd_s_itm_stop_rav_cbt = NULL;
    this->SndLP_JAC_BEEP = NULL;
    this->Sndse_crtcl01 = NULL;
    this->SndLP_JAC_MOTOR4loop_Y33 = NULL;
    this->SndC21JAC_JAC_COUNTMATERMIX = NULL;
    this->SndC21JAC_JAC_KEEEEN1E = NULL;
    this->SndC21JAC_JAC_OTHRPCH_Y33 = NULL;
    this->SndC15HEI_HEI_OYAJI_GETA = NULL;
    this->SndC04YOS_YOS_KATANA = NULL;
    this->SndC04YOS_YOS_KATANAKAITEN3 = NULL;
    this->SndC21JAC_DWN_HVY03_02 = NULL;
    this->SndC21JAC_BRSTJCK_Y34 = NULL;
    this->SndC21JAC_JCKKCK_Y11 = NULL;
    this->SndC21JAC_JCKPCH_Y12 = NULL;
    this->SndC21JAC_MOTOR4_Y33 = NULL;
    this->Sndasa_thrus_01 = NULL;
    this->Sndasa_chain_02 = NULL;
    this->Sndogr_arm01 = NULL;
    this->Sndogr_arm02 = NULL;
    this->Sndogr_arm03 = NULL;
    this->Sndogr_arm04 = NULL;
    this->Sndogr_wing = NULL;
    this->Sndogr_fire01 = NULL;
    this->Sndogr_fire02 = NULL;
    this->Sndogr_cmd01 = NULL;
    this->Sndogr_arm05 = NULL;
    this->Snduju_sp01 = NULL;
    this->Snduju_sp02 = NULL;
    this->Snduju_sp03 = NULL;
    this->Snduju_sp04 = NULL;
    this->Snduju_sp05 = NULL;
    this->Snduju_sp06 = NULL;
    this->Snduju_sp07 = NULL;
    this->Snduju_sp09 = NULL;
    this->SndC04KNM_KNM_KATANA = NULL;
    this->Snd_s_itm_rav_00 = NULL;
    this->Snd_s_itm_rav_01 = NULL;
    this->SndLP_pja_BEEP = NULL;
    this->SndC21pja_MOTOR4_Y33 = NULL;
    this->SndLP_pja_MOTOR4loop_Y33 = NULL;
    this->SndC21pja_pja_COUNTMATERMIX = NULL;
    this->Sndse_pja_pja_arm_dril_s = NULL;
    this->Sndse_pja_arm_dril_l = NULL;
    this->Sndse_pja_body_spin_s = NULL;
    this->Sndse_pja_body_spin_l = NULL;
    this->Sndse_pja_stop = NULL;
    this->Sndse_pja_start = NULL;
    this->Sndse_pja_hand_LP = NULL;
    this->Sndse_rage = NULL;
    this->SndSE_Combo_Finish = NULL;
    this->SndSE_Finish_Shougekiha = NULL;
    this->Sndita_se_arrow = NULL;
    this->Sndita_se_shining_arm = NULL;
    this->Snd_s_kaz_atk07 = NULL;
    this->SndSE_Select2 = NULL;
    this->SndSE_Decide2 = NULL;
    this->SndSE_Select3 = NULL;
    this->SndSE_Decide3 = NULL;
    this->SndSEService = NULL;
    this->SndSESoundCheckLRC = NULL;
    this->SndSEError = NULL;
    this->SndSERageArtsStart = NULL;
    this->Sndkzm_tig_appear = NULL;
    this->Sndkzm_tig_atk_pch = NULL;
    this->Sndkzm_tig_atk_roll = NULL;
    this->Sndkzm_tig_atk_wind = NULL;
    this->Sndkzm_tig_disappear = NULL;
    this->Sndkzm_tig_growl1 = NULL;
    this->Sndkzm_tig_growl2 = NULL;
    this->Sndkzm_tig_growl3 = NULL;
    this->Sndhit_from_startse = NULL;
    this->Sndhit_from_revocrit = NULL;
    this->SndSE_BPass_denide = NULL;
    this->SndSE_BPass_granted = NULL;
    this->SndPlayRevengeMatch = NULL;
    this->SndSE_Makuai_HEI = NULL;
    this->SndSE_Makuai_JIN = NULL;
    this->SndSE_Makuai_KZM = NULL;
    this->Snd_mrx_hadou01_shot = NULL;
    this->Snd_mrx_hadou02_hit_flame = NULL;
    this->Snd_mrx_shoryu_efx = NULL;
    this->Snd_mrx_tatsumaki_efx = NULL;
    this->Snd_mrx_ashura_move = NULL;
    this->Snd_mrx_sliding = NULL;
    this->Snd_battle_spgauge_start = NULL;
    this->Snd_battle_spcombo_start = NULL;
    this->Snd_mrx_shungoku_grab = NULL;
    this->Snd_mrx_shungoku_char = NULL;
    this->Snd_mrx_shungoku_hit = NULL;
    this->Snd_mrx_shungoku_hit_final = NULL;
    this->Snd_mrx_shungoku_finish = NULL;
    this->Snd_mrx_shungoku_finish_ten = NULL;
    this->Snd_se_battle_spgauge_full = NULL;
    this->Snd_mrx_org19 = NULL;
    this->Snd_se_battle_spgauge_start = NULL;
    this->Snd_se_battle_spcombo_start = NULL;
    this->Snd_se_battle_rageattack_start = NULL;
    this->Snd_mrx_saving_start = NULL;
    this->Snd_mrx_saving_attack = NULL;
    this->Snd_mrx_hadou02_set = NULL;
    this->Snd_se_battle_rageattack_hit = NULL;
    this->Snd_mrx_eventtest_hadou_charge = NULL;
    this->Snd__s_hei_org01 = NULL;
    this->Snd__s_hei_org02 = NULL;
    this->Snd_stg00hyo_stream2 = NULL;
    this->Snd_stg00hyo_event1 = NULL;
    this->Snd_frv_warp_disappear = NULL;
    this->Snd_frv_warp_appear = NULL;
    this->Snd_frv_sword_pull = NULL;
    this->Snd_frv_sword_sheathe = NULL;
    this->Snd_frv_sword_hit_01 = NULL;
    this->Snd_frv_sword_hit_02 = NULL;
    this->Snd_frv_sword_hit_03 = NULL;
    this->Snd_frv_sword_swish = NULL;
    this->Snd_frv_sword_roll = NULL;
    this->Snd_frv_ragearts_whoosh_01 = NULL;
    this->Snd_frv_ragearts_whoosh_02 = NULL;
    this->SndSE_Makuai_MRX = NULL;
    this->SndSE_AM_Banacoin_OK = NULL;
    this->SndSE_AM_Banacoin_NG = NULL;
    this->SndSE_Kendatsu_Single = NULL;
    this->SndSE_Kendatsu_Triple = NULL;
    this->SndSE_Kendatsu_Septuple = NULL;
    this->SndSE_Kendatsu_Chance = NULL;
    this->SndSE_Kendatsu_Loss = NULL;
    this->SndSE_Kendatsu_Get = NULL;
    this->SndSE_Kendatsu_Flame_Shine = NULL;
    this->SndSE_Kendatsu_ItemGet = NULL;
    this->SndSE_Title_LP = NULL;
    this->SndSE_mrx_e3_voice_01 = NULL;
    this->SndSE_mrx_e3_voice_02 = NULL;
    this->SndSE_mrx_e3_voice_03 = NULL;
    this->SndSE_hei_e3_voice_01 = NULL;
    this->SndSE_hei_e3_voice_02 = NULL;
    this->SndSE_hei_e3_voice_03 = NULL;
    this->SndSE_hei_e3_voice_04 = NULL;
    this->SndSE_hei_e3_voice_05 = NULL;
    this->SndSE_e3_mrx_hadou02_pass = NULL;
    this->SndSE_e3_hei_escape_hadou02 = NULL;
    this->SndSE_e3_mrx_counter = NULL;
    this->SndSE_e3_hei_counter = NULL;
    this->SndSE_e3_mrx_charge01 = NULL;
    this->SndSE_e3_mrx_charge02 = NULL;
    this->SndSE_e3_mrx_gauge_charge = NULL;
    this->SndSE_e3_hei_charge01 = NULL;
    this->SndSE_e3_hei_charge02 = NULL;
    this->SndSE_e3_hei_rt = NULL;
    this->SndSE_eventtest_battle_end_rt = NULL;
    this->SndSE_e3_hei_charge_attack = NULL;
    this->SndSE_e3_mrx_charge_stop = NULL;
    this->SndSE_e3_hei_charge_stop = NULL;
    this->SndSE_fatality_slow_on = NULL;
    this->SndSE_fatality_slow_off = NULL;
    this->SndSE_drama_slow_on = NULL;
    this->SndSE_drama_slow_off = NULL;
    this->SndSE_e3_qte_display = NULL;
    this->SndSE_e3_qte_success = NULL;
    this->SndSE_e3_qte_fault = NULL;
    this->SndSE_e3_set_counter = NULL;
    this->SndSE_e3_guard_break = NULL;
    this->SndSE_bgm_e3_introduction = NULL;
    this->SndSE_bgm_e3_introduction_stop = NULL;
    this->SndSE_bgm_normal_to_final = NULL;
    this->SndSE_guardbreakhit_on = NULL;
    this->SndSE_guardbreakhit_off = NULL;
    this->SndSE_e3_hei_charge_attack_hit = NULL;
    this->SndSE_Story_hei_ch01_battle_001 = NULL;
    this->SndSE_Story_nin_ch01_battle_001 = NULL;
    this->SndSE_Story_hei_ch05_battle_001 = NULL;
    this->SndSE_Story_hei_ch05_battle_002 = NULL;
    this->SndSE_Story_hei_ch05_battle_003 = NULL;
    this->SndSE_Story_hei_ch05_battle_004 = NULL;
    this->SndSE_Story_hei_ch05_battle_005 = NULL;
    this->SndSE_Story_hei_ch05_battle_006 = NULL;
    this->SndSE_Story_asa_ch06_battle_001 = NULL;
    this->SndSE_Story_asa_ch06_battle_002 = NULL;
    this->SndSE_Story_mrx_ch08_battle_001 = NULL;
    this->SndSE_Story_mrx_ch08_battle_002 = NULL;
    this->SndSE_Story_mrx_ch08_battle_003 = NULL;
    this->SndSE_Story_mrx_ch08_battle_004 = NULL;
    this->SndSE_Story_hei_ch08_battle_001 = NULL;
    this->SndSE_Story_hei_ch08_battle_002 = NULL;
    this->SndSE_Story_hei_ch08_battle_003 = NULL;
    this->SndSE_Story_hei_ch08_battle_004 = NULL;
    this->SndSE_Story_hei_ch08_battle_005 = NULL;
    this->SndSE_Story_asa_ch09_battle_001 = NULL;
    this->SndSE_Story_asa_ch09_battle_002 = NULL;
    this->SndSE_Story_nin_ch09_battle_001 = NULL;
    this->SndSE_Story_mrx_ch11_battle_001 = NULL;
    this->SndSE_Story_mrx_ch11_battle_002 = NULL;
    this->SndSE_Story_kaz_ch11_battle_001 = NULL;
    this->SndSE_Story_kaz_ch11_battle_002 = NULL;
    this->SndSE_Story_kaz_ch11_battle_003 = NULL;
    this->SndSE_Story_kaz_ch11_battle_004 = NULL;
    this->SndSE_Story_hei_ch13_battle_001 = NULL;
    this->SndSE_Story_hei_ch13_battle_002 = NULL;
    this->SndSE_Story_bs7_ch13_battle_001 = NULL;
    this->SndSE_Story_bs7_ch13_battle_002 = NULL;
    this->SndSE_Story_bs7_ch13_battle_003 = NULL;
    this->SndSE_Story_bs7_ch13_battle_004 = NULL;
    this->SndSE_Story_bs7_ch13_battle_005 = NULL;
    this->SndSE_Story_bs7_ch13_battle_006 = NULL;
    this->SndSE_Story_bs7_ch13_battle_007 = NULL;
    this->SndSE_Story_hei_ch14_battle_001 = NULL;
    this->SndSE_Story_hei_ch14_battle_002 = NULL;
    this->SndSE_Story_hei_ch14_battle_003 = NULL;
    this->SndSE_Story_hei_ch14_battle_004 = NULL;
    this->SndSE_Story_hei_ch14_battle_005 = NULL;
    this->SndSE_Story_hei_ch14_battle_006 = NULL;
    this->SndSE_Story_kaz_ch14_battle_001 = NULL;
    this->SndSE_Story_kaz_ch14_battle_002 = NULL;
    this->SndSE_Story_kaz_ch14_battle_003 = NULL;
    this->SndSE_Story_kaz_ch14_battle_004 = NULL;
    this->SndSE_Story_kaz_ch14_battle_005 = NULL;
    this->SndSE_Story_kaz_ch14_battle_006 = NULL;
    this->SndSE_Story_mrx_ch15_battle_001 = NULL;
    this->SndSE_Story_mrx_ch15_battle_002 = NULL;
    this->SndSE_Story_mrx_ch15_battle_003 = NULL;
    this->SndSE_Story_mrx_ch15_battle_004 = NULL;
    this->SndSE_Story_mrx_ch15_battle_005 = NULL;
    this->SndSE_Story_kaz_ch15_battle_001 = NULL;
    this->SndSE_Story_kaz_ch15_battle_002 = NULL;
    this->SndSE_Story_kaz_ch15_battle_003 = NULL;
    this->SndSE_Story_kaz_ch15_battle_004 = NULL;
    this->SndSE_Story_kaz_ch15_battle_005 = NULL;
    this->SndSE_lee_ragearts_flower_effect = NULL;
    this->SndSE_lee_ragearts_flower_hit = NULL;
    this->SndSE_lee_ragearts_mvmt = NULL;
    this->SndSE_INGAMEERROR = NULL;
    this->SndSE_CMN_PAGE_CHANGE = NULL;
    this->SndSE_CMN_PAUSE = NULL;
    this->SndSE_CMN_NOTIFY_ALERT = NULL;
    this->SndSE_CMN_DIALOG_APPEAR = NULL;
    this->SndSE_CMN_DIALOG_COUNTDOWN = NULL;
    this->SndSE_PRACTICE_BUTTON_FLASH_CURSOR = NULL;
    this->SndSE_PRACTICE_BUTTON_FLASH_LP = NULL;
    this->SndSE_PRACTICE_BUTTON_FLASH_RP = NULL;
    this->SndSE_PRACTICE_BUTTON_FLASH_LK = NULL;
    this->SndSE_PRACTICE_BUTTON_FLASH_RK = NULL;
    this->SndSE_CUSTOMIZE_ITEM_ATTACH = NULL;
    this->SndSE_CUSTOMIZE_ITEM_DETACH = NULL;
    this->SndSE_CUSTOMIZE_ITEM_BUY = NULL;
    this->SndSE_CUSTOMIZE_THUMBNAIL_SHUTTER = NULL;
    this->SndSE_VR_MODECHANGE = NULL;
    this->SndSE_RANKMATCH_RECEIVE = NULL;
    this->SndSE_PLAY_RANKMATCH_REVENGEMATCH_JINGLE = NULL;
    this->SndSE_PLAYERMATCH_BATTLE_NOTIFY = NULL;
    this->SndSE_CHAT_NOTIFY_MYREMARK = NULL;
    this->SndSE_CHAT_NOTIFY_OTHERREMARK = NULL;
    this->SndSE_CHAT_NOTIFY_SYSTEMREMARK = NULL;
    this->SndSE_CHAT_DISPLAY_CHATWINDOW_ZOOM = NULL;
    this->SndSE_CHAT_DISPLAY_SOFTWAREKEY = NULL;
    this->SndSE_CHAT_DISPLAY_FIXEDPHRASE = NULL;
    this->SndSE_CHAT_NOTIFY_PLAYER_ENTER = NULL;
    this->SndSE_CHAT_NOTIFY_PLAYER_EXIT = NULL;
    this->SndSE_PLAY_TOURNAMENT_START_JINGLE = NULL;
    this->SndSE_TOURNAMENT_NOTIFY_BATTLECONFIRM = NULL;
    this->SndSE_TOURNAMENT_NOTIFY_BATTLEPROGRESS = NULL;
    this->SndSE_TOURNAMENT_NOTIFY_RANKCONFIRM = NULL;
    this->SndSE_RESULT_FIGHTMONEY_ADDING = NULL;
    this->SndSE_PLAY_UNLOCK_JINGLE = NULL;
    this->SndSE_RESULT_FIGHTMONEY_GET = NULL;
    this->SndSE_CMN_CANCEL = NULL;
    this->SndSE_CHARASELE_CSTM_WINDOW_OPEN = NULL;
    this->SndSE_CHARASELE_CSTM_WINDOW_CLOSE = NULL;
    this->SndSE_Story_hei_ch01_battle_002 = NULL;
    this->SndSE_Story_hei_ch01_battle_003 = NULL;
    this->SndSE_Story_kaz_ch02_battle_001 = NULL;
    this->SndSE_Story_mrx_ch08_battle_005 = NULL;
    this->SndSE_Story_nin_ch09_battle_002 = NULL;
    this->SndSE_Story_hei_ch13_battle_003 = NULL;
    this->SndSE_Story_hei_ch13_battle_004 = NULL;
    this->SndSE_Story_hei_ch14_battle_007 = NULL;
    this->SndSE_Story_hei_ch14_battle_008 = NULL;
    this->SndSE_Story_hei_ch14_battle_009 = NULL;
    this->SndSE_Story_kaz_ch14_battle_007 = NULL;
    this->SndSE_Story_kaz_ch14_battle_008 = NULL;
    this->SndSE_Story_kaz_ch14_battle_009 = NULL;
    this->SndSE_Story_kaz_ch14_battle_010 = NULL;
    this->SndSE_Story_kaz_ch14_battle_011 = NULL;
    this->Snd_elz_ragearts_float = NULL;
    this->Snd_elz_ragearts_trap = NULL;
    this->Snd_elz_ragearts_charge_mvmt = NULL;
    this->Snd_elz_ragearts_trap_break = NULL;
    this->Snd_kum_ragearts_fish_mvmt = NULL;
    this->Snd_kum_ragearts_hit = NULL;
    this->Snd_pan_ragearts_attack = NULL;
    this->Snd_pan_ragearts_mvmt_01 = NULL;
    this->Snd_pan_ragearts_mvmt_02 = NULL;
    this->Snd_pan_ragearts_receive = NULL;
    this->Snd_pan_ragearts_toss = NULL;
    this->SndSE_Story_hei_ch05_battle_001_stop = NULL;
    this->SndSE_Story_hei_ch05_battle_002_stop = NULL;
    this->SndSE_Story_hei_ch05_battle_003_stop = NULL;
    this->SndSE_Story_hei_ch05_battle_005_stop = NULL;
    this->SndSE_cmn_Mainmenu_Decide = NULL;
    this->SndSE_cmn_Mainmenu_Cursor = NULL;
    this->SndSE_Story_ita_ch03_battle_001 = NULL;
    this->SndSE_Story_lee_ch06_battle_001 = NULL;
    this->SndSE_Story_mrx_ch08_battle_006 = NULL;
    this->SndSE_Story_mrx_ch08_battle_007 = NULL;
    this->SndSE_Story_mrx_ch08_battle_008 = NULL;
    this->SndSE_Story_hei_ch08_battle_006 = NULL;
    this->SndSE_Story_hei_ch08_battle_007 = NULL;
    this->SndSE_Story_mrx_ch11_battle_003 = NULL;
    this->SndSE_Story_kzm_ch13_battle_001 = NULL;
    this->SndSE_Story_hei_ch14_battle_010 = NULL;
    this->SndSE_Story_hei_ch14_battle_011 = NULL;
    this->SndSE_Story_hei_ch14_battle_012 = NULL;
    this->SndSE_Story_hei_ch14_battle_013 = NULL;
    this->SndSE_Story_hei_ch14_battle_014 = NULL;
    this->SndSE_Story_hei_ch14_battle_015 = NULL;
    this->SndSE_Story_kaz_ch14_battle_012 = NULL;
    this->SndSE_Story_kaz_ch14_battle_013 = NULL;
    this->SndSE_Story_mrx_ch15_battle_006 = NULL;
    this->SndSE_eps_op_intro = NULL;
    this->Snd_StageSE_Bus_Mute = NULL;
    this->Snd_StageSE_Bus_UnMute = NULL;
}

