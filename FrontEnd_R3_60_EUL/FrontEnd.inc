
;; Library files to be included.
$include "sfupmac.lib"
;; Library files to be included.
$include "heavinit.lib"
$include "sModSlave.lib"
$include "sfupindi.lib"
$include "sfupcomm.lib"
$include "sfupinte.lib"
$include "sfuptime.lib"
;; End of include file list.
;;dynamic symbols allocated for this BLOCK
___FlgDyn_C000005___SG_FELLES		EQU		F [36]		;	Define 36 registers for dynamic usage.
___FlgSta_C000005___SG_FELLES		EQU		F [1]		;	Define 1 registers for dynamic usage.
;;end of dynamic symbols allocated for this BLOCK

;;Start Static symbols allocated for this BLOCK
__stc_id_00003_var_00___SG_FELLES       EQU     F         [4]       ;static variable Fs[4]
__stc_id_00003_var_01___SG_FELLES       EQU     F         [2]       ;static variable Fsw[2]
__stc_id_00003_var_02___SG_FELLES       EQU     R         [2]       ;static variable Rs[2]
__stc_id_00003_var_03___SG_FELLES       EQU     R         [3]       ;static variable Clk[3]
$ATTR TAGS=S_ADJUST
__stc_id_00003_var_04___SG_FELLES       EQU     C                    ;static variable Cs[1]
__stc_id_00003_var_05___SG_FELLES       EQU     F                    ;static variable LED[1]
;;resources used as online adjust variable
$ATTR TAGS=S_ADJUST
__sadj_id_00003_var_Fs_2 EQU __stc_id_00003_var_00___SG_FELLES + 2 
$ATTR TAGS=S_ADJUST
__sadj_id_00003_var_Fsw_0 EQU __stc_id_00003_var_01___SG_FELLES + 0 
__stc_id_00246_var_00___SG_FELLES       EQU     F                    ;static variable LED[1]
__stc_id_00247_var_00___SG_FELLES       EQU     F         [3]       ;static variable Fs[3]
__stc_id_00247_var_01___SG_FELLES       EQU     F         [10]       ;static variable Fsd[10]
__stc_id_00247_var_02___SG_FELLES       EQU     R                    ;static variable Rs[1]
__stc_id_00247_var_03___SG_FELLES       EQU     F                    ;static variable LED[1]
__stc_id_00248_var_00___SG_FELLES       EQU     F                    ;static variable LED[1]
__stc_id_00249_var_00___SG_FELLES       EQU     F                    ;static variable LED[1]
;;resources used as online adjust variable
$ATTR TAGS=S_ADJUST
__sadj_id_00247_var_Fs_2 EQU __stc_id_00247_var_00___SG_FELLES + 2 
;;End Static symbols allocated for this BLOCK
;;Start Dynamic symbol aliases allocated for this BLOCK
__fup_C000005_00_25_09___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+0 ;Export name of network.
__fup_C000005_00_25_0b___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+1 ;Export name of network.
__fup_C000005_01_27_0a___SG_FELLES       EQU                        ___FlgSta_C000005___SG_FELLES+0 ;Export name of network.
__fup_C000005_01_27_12___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+0 ;Export name of network.
__fup_C000005_01_27_14___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+1 ;Export name of network.
__fup_C000005_01_27_1d___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+2 ;Export name of network.
__fup_C000005_01_27_25___SG_FELLES       EQU                        ___FlgDyn_C000005___SG_FELLES+3 ;Export name of network.
;;End Dynamic symbol aliases allocated for this BLOCK
;;dynamic symbols allocated for this BLOCK
___RegDyn_C000001___SG_COB_SBus1		EQU		R [25]		;	Define 25 registers for dynamic usage.
___FlgSta_C000001___SG_COB_SBus1		EQU		F [129]		;	Define 129 registers for dynamic usage.
___FlgDyn_C000001___SG_COB_SBus1		EQU		F [2]		;	Define 2 registers for dynamic usage.
;;end of dynamic symbols allocated for this BLOCK

;;Start Static symbols allocated for this BLOCK
__stc_id_00002_var_00___SG_COB_SBus1       EQU     F         [12]       ;static variable Fs[12]
__stc_id_00002_var_01___SG_COB_SBus1       EQU     F         [32]       ;static variable FDi[32]
__stc_id_00002_var_02___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
__stc_id_0000D_var_00___SG_COB_SBus1       EQU     F         [8]       ;static variable Fs[8]
__stc_id_0000D_var_01___SG_COB_SBus1       EQU     R         [3]       ;static variable Rs[3]
__stc_id_0000D_var_02___SG_COB_SBus1       EQU     R                    ;static variable RsT[1]
__stc_id_0000D_var_03___SG_COB_SBus1       EQU     F                    ;static variable FsE[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000D_var_04___SG_COB_SBus1       EQU     F                    ;static variable Clr[1]
__stc_id_0000D_var_05___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000D_var_06___SG_COB_SBus1       EQU     R                    ;static variable ADJ2[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000D_var_07___SG_COB_SBus1       EQU     R                    ;static variable ADJ3[1]
;;resources used as online adjust variable
$ATTR TAGS=S_ADJUST
__sadj_id_00002_var_Fs_11 EQU __stc_id_00002_var_00___SG_COB_SBus1 + 11 
$IFNDEF	A.MACROS.SBus1
A.MACROS.SBus1		EQU				13  ;[_COMSASM4
$ENDIF
__stc_id_00216_var_00___SG_COB_SBus1       EQU     T                    ;static variable Tim[1]
__stc_id_00216_var_01___SG_COB_SBus1       EQU     F                    ;static variable Sta[1]
__stc_id_00217_var_00___SG_COB_SBus1       EQU     T                    ;static variable Tim[1]
__stc_id_00217_var_01___SG_COB_SBus1       EQU     F                    ;static variable Sta[1]
$ATTR TAGS=S_ADJUST
__stc_id_00218_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00218_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00219_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00219_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0021B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0021B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0021C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0021C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0021D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0021D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0021F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0021F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00220_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00220_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00221_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00221_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00222_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00222_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00223_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00223_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00224_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00224_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00225_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00225_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00226_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00226_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00227_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00227_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00228_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00228_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00229_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00229_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0022F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0022F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00230_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00230_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00231_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00231_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00232_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00232_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00233_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00233_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00234_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00234_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00235_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00235_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00236_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00236_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00237_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00237_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00238_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00238_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00239_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00239_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0023F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0023F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00240_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00240_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00241_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00241_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0000B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0000C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0000E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0000E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_01
A.MACROS.Rx_Stn_01		EQU				11  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_01
A.MACROS.Tx_Stn_01		EQU				12  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00024_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00024_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00025_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00025_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00026_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00026_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_02
A.MACROS.Rx_Stn_02		EQU				36  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_02
A.MACROS.Tx_Stn_02		EQU				37  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00021_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00021_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00022_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00022_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00023_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00023_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_03
A.MACROS.Rx_Stn_03		EQU				33  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_03
A.MACROS.Tx_Stn_03		EQU				34  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0001E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0001F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00020_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00020_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_04
A.MACROS.Rx_Stn_04		EQU				30  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_04
A.MACROS.Tx_Stn_04		EQU				31  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0001B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0001C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0001D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_05
A.MACROS.Rx_Stn_05		EQU				27  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_05
A.MACROS.Tx_Stn_05		EQU				28  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00018_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00018_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00019_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00019_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0001A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0001A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_06
A.MACROS.Rx_Stn_06		EQU				24  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_06
A.MACROS.Tx_Stn_06		EQU				25  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00015_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00015_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00016_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00016_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00017_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00017_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_07
A.MACROS.Rx_Stn_07		EQU				21  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_07
A.MACROS.Tx_Stn_07		EQU				22  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00012_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00012_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00013_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00013_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00014_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00014_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_08
A.MACROS.Rx_Stn_08		EQU				18  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_08
A.MACROS.Tx_Stn_08		EQU				19  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0000F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0000F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00010_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00010_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00011_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00011_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_09
A.MACROS.Rx_Stn_09		EQU				15  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_09
A.MACROS.Tx_Stn_09		EQU				16  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00179_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00179_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0017A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0017A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0017B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0017B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_10
A.MACROS.Rx_Stn_10		EQU				377  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_10
A.MACROS.Tx_Stn_10		EQU				378  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00176_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00176_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00177_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00177_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00178_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00178_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_11
A.MACROS.Rx_Stn_11		EQU				374  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_11
A.MACROS.Tx_Stn_11		EQU				375  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00173_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00173_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00174_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00174_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00175_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00175_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_12
A.MACROS.Rx_Stn_12		EQU				371  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_12
A.MACROS.Tx_Stn_12		EQU				372  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00170_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00170_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00171_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00171_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00172_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00172_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_13
A.MACROS.Rx_Stn_13		EQU				368  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_13
A.MACROS.Tx_Stn_13		EQU				369  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0016D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0016E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0016F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_14
A.MACROS.Rx_Stn_14		EQU				365  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_14
A.MACROS.Tx_Stn_14		EQU				366  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0016A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0016B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0016C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0016C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_15
A.MACROS.Rx_Stn_15		EQU				362  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_15
A.MACROS.Tx_Stn_15		EQU				363  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00167_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00167_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00168_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00168_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00169_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00169_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_16
A.MACROS.Rx_Stn_16		EQU				359  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_16
A.MACROS.Tx_Stn_16		EQU				360  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00164_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00164_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00165_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00165_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00166_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00166_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_17
A.MACROS.Rx_Stn_17		EQU				356  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_17
A.MACROS.Tx_Stn_17		EQU				357  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00161_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00161_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00162_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00162_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00163_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00163_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_18
A.MACROS.Rx_Stn_18		EQU				353  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_18
A.MACROS.Tx_Stn_18		EQU				354  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0015E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0015F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00160_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00160_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_19
A.MACROS.Rx_Stn_19		EQU				350  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_19
A.MACROS.Tx_Stn_19		EQU				351  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0015B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0015C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0015D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_20
A.MACROS.Rx_Stn_20		EQU				347  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_20
A.MACROS.Tx_Stn_20		EQU				348  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00158_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00158_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00159_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00159_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0015A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0015A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_21
A.MACROS.Rx_Stn_21		EQU				344  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_21
A.MACROS.Tx_Stn_21		EQU				345  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00155_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00155_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00156_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00156_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00157_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00157_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_22
A.MACROS.Rx_Stn_22		EQU				341  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_22
A.MACROS.Tx_Stn_22		EQU				342  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00152_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00152_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00153_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00153_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00154_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00154_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_23
A.MACROS.Rx_Stn_23		EQU				338  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_23
A.MACROS.Tx_Stn_23		EQU				339  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0014F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00150_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00150_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00151_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00151_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_24
A.MACROS.Rx_Stn_24		EQU				335  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_24
A.MACROS.Tx_Stn_24		EQU				336  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0014C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0014D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0014E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_25
A.MACROS.Rx_Stn_25		EQU				332  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_25
A.MACROS.Tx_Stn_25		EQU				333  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00149_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00149_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0014A_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014A_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0014B_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0014B_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_26
A.MACROS.Rx_Stn_26		EQU				329  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_26
A.MACROS.Tx_Stn_26		EQU				330  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00146_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00146_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00147_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00147_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00148_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00148_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_27
A.MACROS.Rx_Stn_27		EQU				326  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_27
A.MACROS.Tx_Stn_27		EQU				327  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00143_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00143_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00144_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00144_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00145_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00145_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_28
A.MACROS.Rx_Stn_28		EQU				323  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_28
A.MACROS.Tx_Stn_28		EQU				324  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00140_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00140_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00141_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00141_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00142_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_00142_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_29
A.MACROS.Rx_Stn_29		EQU				320  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_29
A.MACROS.Tx_Stn_29		EQU				321  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0013D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0013D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0013E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0013E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0013F_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0013F_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_30
A.MACROS.Rx_Stn_30		EQU				317  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_30
A.MACROS.Tx_Stn_30		EQU				318  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000DA_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DA_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000DB_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DB_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000DC_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DC_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_31
A.MACROS.Rx_Stn_31		EQU				218  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_31
A.MACROS.Tx_Stn_31		EQU				219  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000D7_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D7_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D8_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D8_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D9_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D9_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_32
A.MACROS.Rx_Stn_32		EQU				215  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_32
A.MACROS.Tx_Stn_32		EQU				216  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000D4_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D4_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D5_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D5_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D6_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D6_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_33
A.MACROS.Rx_Stn_33		EQU				212  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_33
A.MACROS.Tx_Stn_33		EQU				213  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000D1_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D1_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D2_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D2_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D3_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D3_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_34
A.MACROS.Rx_Stn_34		EQU				209  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_34
A.MACROS.Tx_Stn_34		EQU				210  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000CE_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CE_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000CF_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CF_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000D0_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000D0_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_35
A.MACROS.Rx_Stn_35		EQU				206  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_35
A.MACROS.Tx_Stn_35		EQU				207  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000CB_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CB_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000CC_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CC_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000CD_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CD_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_36
A.MACROS.Rx_Stn_36		EQU				203  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_36
A.MACROS.Tx_Stn_36		EQU				204  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000C8_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C8_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000C9_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C9_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000CA_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000CA_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_37
A.MACROS.Rx_Stn_37		EQU				200  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_37
A.MACROS.Tx_Stn_37		EQU				201  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000C5_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C5_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000C6_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C6_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000C7_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C7_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_38
A.MACROS.Rx_Stn_38		EQU				197  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_38
A.MACROS.Tx_Stn_38		EQU				198  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000C2_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C2_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000C3_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C3_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000C4_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000C4_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_39
A.MACROS.Rx_Stn_39		EQU				194  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_39
A.MACROS.Tx_Stn_39		EQU				195  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_000DD_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DD_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000DE_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DE_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_000DF_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_000DF_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_40
A.MACROS.Rx_Stn_40		EQU				221  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_40
A.MACROS.Tx_Stn_40		EQU				222  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0011C_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0011C_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0011D_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0011D_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0011E_var_00___SG_COB_SBus1       EQU     F                    ;static variable Fs[1]
__stc_id_0011E_var_01___SG_COB_SBus1       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_41
A.MACROS.Rx_Stn_41		EQU				284  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_41
A.MACROS.Tx_Stn_41		EQU				285  ;[_COMTXI4Q
$ENDIF
;;End Static symbols allocated for this BLOCK
;;Start Dynamic symbol aliases allocated for this BLOCK
__fup_C000001_01_2d_1e___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+3 ;Export name of network.
__fup_C000001_01_2d_16___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+2 ;Export name of network.
__fup_C000001_02_0d_13___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_02_0d_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_02_0d_23___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+2 ;Export name of network.
__fup_C000001_02_0d_2b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+3 ;Export name of network.
__fup_C000001_02_0d_33___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+4 ;Export name of network.
__fup_C000001_02_0d_5b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+9 ;Export name of network.
__fup_C000001_02_0d_3b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+5 ;Export name of network.
__fup_C000001_02_0d_43___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+6 ;Export name of network.
__fup_C000001_02_0d_4b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+7 ;Export name of network.
__fup_C000001_02_0d_53___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+8 ;Export name of network.
__fup_C000001_02_1f_13___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+10 ;Export name of network.
__fup_C000001_02_1f_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+11 ;Export name of network.
__fup_C000001_02_1f_23___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+12 ;Export name of network.
__fup_C000001_02_1f_2b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+13 ;Export name of network.
__fup_C000001_02_1f_33___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+14 ;Export name of network.
__fup_C000001_02_1f_5b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+19 ;Export name of network.
__fup_C000001_02_1f_3b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+15 ;Export name of network.
__fup_C000001_02_1f_43___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+16 ;Export name of network.
__fup_C000001_02_1f_4b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+17 ;Export name of network.
__fup_C000001_02_1f_53___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+18 ;Export name of network.
__fup_C000001_02_33_13___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+20 ;Export name of network.
__fup_C000001_02_33_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+21 ;Export name of network.
__fup_C000001_02_33_23___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+22 ;Export name of network.
__fup_C000001_02_33_2b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+23 ;Export name of network.
__fup_C000001_02_33_33___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+24 ;Export name of network.
__fup_C000001_02_33_5b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+29 ;Export name of network.
__fup_C000001_02_33_3b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+25 ;Export name of network.
__fup_C000001_02_33_43___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+26 ;Export name of network.
__fup_C000001_02_33_4b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+27 ;Export name of network.
__fup_C000001_02_33_53___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+28 ;Export name of network.
__fup_C000001_02_47_13___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+30 ;Export name of network.
__fup_C000001_02_47_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+31 ;Export name of network.
__fup_C000001_02_47_23___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+32 ;Export name of network.
__fup_C000001_02_47_2b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+33 ;Export name of network.
__fup_C000001_02_47_33___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+34 ;Export name of network.
__fup_C000001_02_47_5b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+39 ;Export name of network.
__fup_C000001_02_47_3b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+35 ;Export name of network.
__fup_C000001_02_47_43___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+36 ;Export name of network.
__fup_C000001_02_47_4b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+37 ;Export name of network.
__fup_C000001_02_47_53___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+38 ;Export name of network.
__fup_C000001_03_35_0c___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_03_35_0d___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_03_35_0e___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+2 ;Export name of network.
__fup_C000001_03_35_0f___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+3 ;Export name of network.
__fup_C000001_03_35_10___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+4 ;Export name of network.
__fup_C000001_03_35_11___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+5 ;Export name of network.
__fup_C000001_03_35_12___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+6 ;Export name of network.
__fup_C000001_03_35_13___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+7 ;Export name of network.
__fup_C000001_03_35_14___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+8 ;Export name of network.
__fup_C000001_03_35_15___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+9 ;Export name of network.
__fup_C000001_03_35_16___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+10 ;Export name of network.
__fup_C000001_03_35_17___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+11 ;Export name of network.
__fup_C000001_03_35_18___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+12 ;Export name of network.
__fup_C000001_03_35_19___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+13 ;Export name of network.
__fup_C000001_03_35_1a___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+14 ;Export name of network.
__fup_C000001_03_35_1b___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+15 ;Export name of network.
__fup_C000001_03_35_1c___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+16 ;Export name of network.
__fup_C000001_03_35_1d___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+17 ;Export name of network.
__fup_C000001_03_35_1e___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+18 ;Export name of network.
__fup_C000001_03_35_1f___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+19 ;Export name of network.
__fup_C000001_03_35_20___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+20 ;Export name of network.
__fup_C000001_03_35_21___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+21 ;Export name of network.
__fup_C000001_03_35_22___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+22 ;Export name of network.
__fup_C000001_03_35_23___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+23 ;Export name of network.
__fup_C000001_03_35_24___SG_COB_SBus1       EQU                        ___RegDyn_C000001___SG_COB_SBus1+24 ;Export name of network.
__fup_C000001_05_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+40 ;Export name of network.
__fup_C000001_05_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+41 ;Export name of network.
__fup_C000001_05_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_06_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+42 ;Export name of network.
__fup_C000001_06_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+43 ;Export name of network.
__fup_C000001_06_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_07_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+44 ;Export name of network.
__fup_C000001_07_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+45 ;Export name of network.
__fup_C000001_07_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_08_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+46 ;Export name of network.
__fup_C000001_08_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+47 ;Export name of network.
__fup_C000001_08_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_09_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+48 ;Export name of network.
__fup_C000001_09_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+49 ;Export name of network.
__fup_C000001_09_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0A_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+50 ;Export name of network.
__fup_C000001_0A_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+51 ;Export name of network.
__fup_C000001_0A_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0B_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+52 ;Export name of network.
__fup_C000001_0B_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+53 ;Export name of network.
__fup_C000001_0B_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0C_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+54 ;Export name of network.
__fup_C000001_0C_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+55 ;Export name of network.
__fup_C000001_0C_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0D_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+56 ;Export name of network.
__fup_C000001_0D_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+57 ;Export name of network.
__fup_C000001_0D_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0E_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+58 ;Export name of network.
__fup_C000001_0E_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+59 ;Export name of network.
__fup_C000001_0E_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_0F_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+60 ;Export name of network.
__fup_C000001_0F_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+61 ;Export name of network.
__fup_C000001_0F_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_10_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+62 ;Export name of network.
__fup_C000001_10_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+63 ;Export name of network.
__fup_C000001_10_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_11_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+64 ;Export name of network.
__fup_C000001_11_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+65 ;Export name of network.
__fup_C000001_11_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_12_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+66 ;Export name of network.
__fup_C000001_12_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+67 ;Export name of network.
__fup_C000001_12_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_13_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+68 ;Export name of network.
__fup_C000001_13_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+69 ;Export name of network.
__fup_C000001_13_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_14_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+70 ;Export name of network.
__fup_C000001_14_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+71 ;Export name of network.
__fup_C000001_14_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_15_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+72 ;Export name of network.
__fup_C000001_15_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+73 ;Export name of network.
__fup_C000001_15_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_16_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+74 ;Export name of network.
__fup_C000001_16_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+75 ;Export name of network.
__fup_C000001_16_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_17_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+76 ;Export name of network.
__fup_C000001_17_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+77 ;Export name of network.
__fup_C000001_17_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_18_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+78 ;Export name of network.
__fup_C000001_18_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+79 ;Export name of network.
__fup_C000001_18_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_19_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+80 ;Export name of network.
__fup_C000001_19_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+81 ;Export name of network.
__fup_C000001_19_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1A_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+82 ;Export name of network.
__fup_C000001_1A_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+83 ;Export name of network.
__fup_C000001_1A_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1B_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+84 ;Export name of network.
__fup_C000001_1B_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+85 ;Export name of network.
__fup_C000001_1B_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1C_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+86 ;Export name of network.
__fup_C000001_1C_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+87 ;Export name of network.
__fup_C000001_1C_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1D_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+88 ;Export name of network.
__fup_C000001_1D_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+89 ;Export name of network.
__fup_C000001_1D_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1E_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+90 ;Export name of network.
__fup_C000001_1E_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+91 ;Export name of network.
__fup_C000001_1E_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_1F_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+92 ;Export name of network.
__fup_C000001_1F_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+93 ;Export name of network.
__fup_C000001_1F_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_20_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+94 ;Export name of network.
__fup_C000001_20_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+95 ;Export name of network.
__fup_C000001_20_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_21_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+96 ;Export name of network.
__fup_C000001_21_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+97 ;Export name of network.
__fup_C000001_21_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_22_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+98 ;Export name of network.
__fup_C000001_22_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+99 ;Export name of network.
__fup_C000001_22_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_23_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+100 ;Export name of network.
__fup_C000001_23_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+101 ;Export name of network.
__fup_C000001_23_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_24_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+102 ;Export name of network.
__fup_C000001_24_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+103 ;Export name of network.
__fup_C000001_24_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_25_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+104 ;Export name of network.
__fup_C000001_25_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+105 ;Export name of network.
__fup_C000001_25_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_26_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+106 ;Export name of network.
__fup_C000001_26_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+107 ;Export name of network.
__fup_C000001_26_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_27_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+109 ;Export name of network.
__fup_C000001_27_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+110 ;Export name of network.
__fup_C000001_27_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_27_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+108 ;Export name of network.
__fup_C000001_27_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_28_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+112 ;Export name of network.
__fup_C000001_28_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+113 ;Export name of network.
__fup_C000001_28_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_28_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+111 ;Export name of network.
__fup_C000001_28_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_29_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+115 ;Export name of network.
__fup_C000001_29_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+116 ;Export name of network.
__fup_C000001_29_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_29_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+114 ;Export name of network.
__fup_C000001_29_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_2A_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+118 ;Export name of network.
__fup_C000001_2A_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+119 ;Export name of network.
__fup_C000001_2A_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_2A_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+117 ;Export name of network.
__fup_C000001_2A_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_2B_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+121 ;Export name of network.
__fup_C000001_2B_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+122 ;Export name of network.
__fup_C000001_2B_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_2B_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+120 ;Export name of network.
__fup_C000001_2B_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_2C_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+124 ;Export name of network.
__fup_C000001_2C_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+125 ;Export name of network.
__fup_C000001_2C_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_2C_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+123 ;Export name of network.
__fup_C000001_2C_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
__fup_C000001_2D_27_1b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+127 ;Export name of network.
__fup_C000001_2D_27_2a___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+128 ;Export name of network.
__fup_C000001_2D_27_09___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+0 ;Export name of network.
__fup_C000001_2D_27_0b___SG_COB_SBus1       EQU                        ___FlgSta_C000001___SG_COB_SBus1+126 ;Export name of network.
__fup_C000001_2D_27_0d___SG_COB_SBus1       EQU                        ___FlgDyn_C000001___SG_COB_SBus1+1 ;Export name of network.
;;End Dynamic symbol aliases allocated for this BLOCK
;;dynamic symbols allocated for this BLOCK
___RegDyn_C000002___SG_COB_SBus2		EQU		R [25]		;	Define 25 registers for dynamic usage.
___FlgDyn_C000002___SG_COB_SBus2		EQU		F [1]		;	Define 1 registers for dynamic usage.
___FlgSta_C000002___SG_COB_SBus2		EQU		F [82]		;	Define 82 registers for dynamic usage.
;;end of dynamic symbols allocated for this BLOCK

;;Start Static symbols allocated for this BLOCK
__stc_id_00066_var_00___SG_COB_SBus2       EQU     F         [12]       ;static variable Fs[12]
__stc_id_00066_var_01___SG_COB_SBus2       EQU     F         [32]       ;static variable FDi[32]
__stc_id_00066_var_02___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
__stc_id_00067_var_00___SG_COB_SBus2       EQU     F         [8]       ;static variable Fs[8]
__stc_id_00067_var_01___SG_COB_SBus2       EQU     R         [3]       ;static variable Rs[3]
__stc_id_00067_var_02___SG_COB_SBus2       EQU     R                    ;static variable RsT[1]
__stc_id_00067_var_03___SG_COB_SBus2       EQU     F                    ;static variable FsE[1]
$ATTR TAGS=S_ADJUST
__stc_id_00067_var_04___SG_COB_SBus2       EQU     F                    ;static variable Clr[1]
__stc_id_00067_var_05___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00067_var_06___SG_COB_SBus2       EQU     R                    ;static variable ADJ2[1]
$ATTR TAGS=S_ADJUST
__stc_id_00067_var_07___SG_COB_SBus2       EQU     R                    ;static variable ADJ3[1]
;;resources used as online adjust variable
$ATTR TAGS=S_ADJUST
__sadj_id_00066_var_Fs_11 EQU __stc_id_00066_var_00___SG_COB_SBus2 + 11 
$IFNDEF	A.MACROS.SBus2
A.MACROS.SBus2		EQU				103  ;[_COMSASM4
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0020F_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020F_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00210_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00210_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00211_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00211_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_01
A.MACROS.Rx_Stn_01		EQU				527  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_01
A.MACROS.Tx_Stn_01		EQU				528  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0020C_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020C_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0020D_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020D_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0020E_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020E_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_02
A.MACROS.Rx_Stn_02		EQU				524  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_02
A.MACROS.Tx_Stn_02		EQU				525  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00209_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00209_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0020A_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020A_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0020B_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0020B_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_03
A.MACROS.Rx_Stn_03		EQU				521  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_03
A.MACROS.Tx_Stn_03		EQU				522  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00206_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00206_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00207_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00207_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00208_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00208_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_04
A.MACROS.Rx_Stn_04		EQU				518  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_04
A.MACROS.Tx_Stn_04		EQU				519  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00203_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00203_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00204_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00204_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00205_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00205_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_05
A.MACROS.Rx_Stn_05		EQU				515  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_05
A.MACROS.Tx_Stn_05		EQU				516  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00200_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00200_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00201_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00201_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00202_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00202_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_06
A.MACROS.Rx_Stn_06		EQU				512  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_06
A.MACROS.Tx_Stn_06		EQU				513  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001FD_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FD_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001FE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001FF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_07
A.MACROS.Rx_Stn_07		EQU				509  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_07
A.MACROS.Tx_Stn_07		EQU				510  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001FA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001FB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001FC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001FC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_08
A.MACROS.Rx_Stn_08		EQU				506  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_08
A.MACROS.Tx_Stn_08		EQU				507  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001F7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_09
A.MACROS.Rx_Stn_09		EQU				503  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_09
A.MACROS.Tx_Stn_09		EQU				504  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001F4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_10
A.MACROS.Rx_Stn_10		EQU				500  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_10
A.MACROS.Tx_Stn_10		EQU				501  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001F1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_11
A.MACROS.Rx_Stn_11		EQU				497  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_11
A.MACROS.Tx_Stn_11		EQU				498  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001EE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001EE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001EF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001EF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001F0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001F0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_12
A.MACROS.Rx_Stn_12		EQU				494  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_12
A.MACROS.Tx_Stn_12		EQU				495  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001EB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001EB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001EC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001EC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001ED_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001ED_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_13
A.MACROS.Rx_Stn_13		EQU				491  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_13
A.MACROS.Tx_Stn_13		EQU				492  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001E8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001EA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001EA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_14
A.MACROS.Rx_Stn_14		EQU				488  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_14
A.MACROS.Tx_Stn_14		EQU				489  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001E5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_15
A.MACROS.Rx_Stn_15		EQU				485  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_15
A.MACROS.Tx_Stn_15		EQU				486  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001E2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_16
A.MACROS.Rx_Stn_16		EQU				482  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_16
A.MACROS.Tx_Stn_16		EQU				483  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001DF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001E1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001E1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_17
A.MACROS.Rx_Stn_17		EQU				479  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_17
A.MACROS.Tx_Stn_17		EQU				480  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001DC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001DD_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DD_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001DE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_18
A.MACROS.Rx_Stn_18		EQU				476  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_18
A.MACROS.Tx_Stn_18		EQU				477  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001D9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001DA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001DB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001DB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_19
A.MACROS.Rx_Stn_19		EQU				473  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_19
A.MACROS.Tx_Stn_19		EQU				474  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001D6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_20
A.MACROS.Rx_Stn_20		EQU				470  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_20
A.MACROS.Tx_Stn_20		EQU				471  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001D3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_21
A.MACROS.Rx_Stn_21		EQU				467  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_21
A.MACROS.Tx_Stn_21		EQU				468  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001D0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001D2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001D2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_22
A.MACROS.Rx_Stn_22		EQU				464  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_22
A.MACROS.Tx_Stn_22		EQU				465  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001CD_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CD_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001CE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001CF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_23
A.MACROS.Rx_Stn_23		EQU				461  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_23
A.MACROS.Tx_Stn_23		EQU				462  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001CA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001CB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001CC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001CC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_24
A.MACROS.Rx_Stn_24		EQU				458  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_24
A.MACROS.Tx_Stn_24		EQU				459  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001C7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_25
A.MACROS.Rx_Stn_25		EQU				455  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_25
A.MACROS.Tx_Stn_25		EQU				456  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001C4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_26
A.MACROS.Rx_Stn_26		EQU				452  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_26
A.MACROS.Tx_Stn_26		EQU				453  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001C1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_27
A.MACROS.Rx_Stn_27		EQU				449  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_27
A.MACROS.Tx_Stn_27		EQU				450  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001BE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001BF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001C0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001C0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_28
A.MACROS.Rx_Stn_28		EQU				446  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_28
A.MACROS.Tx_Stn_28		EQU				447  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001BB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001BC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001BD_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BD_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_29
A.MACROS.Rx_Stn_29		EQU				443  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_29
A.MACROS.Tx_Stn_29		EQU				444  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001B8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001BA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001BA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_30
A.MACROS.Rx_Stn_30		EQU				440  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_30
A.MACROS.Tx_Stn_30		EQU				441  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001B5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_31
A.MACROS.Rx_Stn_31		EQU				437  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_31
A.MACROS.Tx_Stn_31		EQU				438  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001B2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_32
A.MACROS.Rx_Stn_32		EQU				434  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_32
A.MACROS.Tx_Stn_32		EQU				435  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001AF_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AF_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001B1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001B1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_33
A.MACROS.Rx_Stn_33		EQU				431  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_33
A.MACROS.Tx_Stn_33		EQU				432  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001AC_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AC_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001AD_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AD_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001AE_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AE_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_34
A.MACROS.Rx_Stn_34		EQU				428  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_34
A.MACROS.Tx_Stn_34		EQU				429  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001A9_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A9_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001AA_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AA_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001AB_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001AB_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_35
A.MACROS.Rx_Stn_35		EQU				425  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_35
A.MACROS.Tx_Stn_35		EQU				426  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001A6_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A6_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A7_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A7_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A8_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A8_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_36
A.MACROS.Rx_Stn_36		EQU				422  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_36
A.MACROS.Tx_Stn_36		EQU				423  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001A3_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A3_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A4_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A4_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A5_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A5_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_37
A.MACROS.Rx_Stn_37		EQU				419  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_37
A.MACROS.Tx_Stn_37		EQU				420  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_001A0_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A0_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A1_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A1_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_001A2_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_001A2_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_38
A.MACROS.Rx_Stn_38		EQU				416  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_38
A.MACROS.Tx_Stn_38		EQU				417  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0019D_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019D_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0019E_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019E_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0019F_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019F_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_39
A.MACROS.Rx_Stn_39		EQU				413  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_39
A.MACROS.Tx_Stn_39		EQU				414  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0019A_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019A_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0019B_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019B_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0019C_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_0019C_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_40
A.MACROS.Rx_Stn_40		EQU				410  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_40
A.MACROS.Tx_Stn_40		EQU				411  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00197_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00197_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00198_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00198_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00199_var_00___SG_COB_SBus2       EQU     F                    ;static variable Fs[1]
__stc_id_00199_var_01___SG_COB_SBus2       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_41
A.MACROS.Rx_Stn_41		EQU				407  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_41
A.MACROS.Tx_Stn_41		EQU				408  ;[_COMTXI4Q
$ENDIF
;;End Static symbols allocated for this BLOCK
;;Start Dynamic symbol aliases allocated for this BLOCK
__fup_C000002_02_35_0c___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_02_35_0d___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+1 ;Export name of network.
__fup_C000002_02_35_0e___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+2 ;Export name of network.
__fup_C000002_02_35_0f___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+3 ;Export name of network.
__fup_C000002_02_35_10___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+4 ;Export name of network.
__fup_C000002_02_35_11___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+5 ;Export name of network.
__fup_C000002_02_35_12___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+6 ;Export name of network.
__fup_C000002_02_35_13___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+7 ;Export name of network.
__fup_C000002_02_35_14___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+8 ;Export name of network.
__fup_C000002_02_35_15___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+9 ;Export name of network.
__fup_C000002_02_35_16___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+10 ;Export name of network.
__fup_C000002_02_35_17___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+11 ;Export name of network.
__fup_C000002_02_35_18___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+12 ;Export name of network.
__fup_C000002_02_35_19___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+13 ;Export name of network.
__fup_C000002_02_35_1a___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+14 ;Export name of network.
__fup_C000002_02_35_1b___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+15 ;Export name of network.
__fup_C000002_02_35_1c___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+16 ;Export name of network.
__fup_C000002_02_35_1d___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+17 ;Export name of network.
__fup_C000002_02_35_1e___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+18 ;Export name of network.
__fup_C000002_02_35_1f___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+19 ;Export name of network.
__fup_C000002_02_35_20___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+20 ;Export name of network.
__fup_C000002_02_35_21___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+21 ;Export name of network.
__fup_C000002_02_35_22___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+22 ;Export name of network.
__fup_C000002_02_35_23___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+23 ;Export name of network.
__fup_C000002_02_35_24___SG_COB_SBus2       EQU                        ___RegDyn_C000002___SG_COB_SBus2+24 ;Export name of network.
__fup_C000002_03_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_03_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+1 ;Export name of network.
__fup_C000002_03_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_04_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+2 ;Export name of network.
__fup_C000002_04_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+3 ;Export name of network.
__fup_C000002_04_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_05_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+4 ;Export name of network.
__fup_C000002_05_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+5 ;Export name of network.
__fup_C000002_05_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_06_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+6 ;Export name of network.
__fup_C000002_06_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+7 ;Export name of network.
__fup_C000002_06_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_07_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+8 ;Export name of network.
__fup_C000002_07_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+9 ;Export name of network.
__fup_C000002_07_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_08_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+10 ;Export name of network.
__fup_C000002_08_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+11 ;Export name of network.
__fup_C000002_08_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_09_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+12 ;Export name of network.
__fup_C000002_09_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+13 ;Export name of network.
__fup_C000002_09_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0A_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+14 ;Export name of network.
__fup_C000002_0A_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+15 ;Export name of network.
__fup_C000002_0A_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0B_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+16 ;Export name of network.
__fup_C000002_0B_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+17 ;Export name of network.
__fup_C000002_0B_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0C_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+18 ;Export name of network.
__fup_C000002_0C_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+19 ;Export name of network.
__fup_C000002_0C_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0D_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+20 ;Export name of network.
__fup_C000002_0D_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+21 ;Export name of network.
__fup_C000002_0D_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0E_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+22 ;Export name of network.
__fup_C000002_0E_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+23 ;Export name of network.
__fup_C000002_0E_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_0F_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+24 ;Export name of network.
__fup_C000002_0F_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+25 ;Export name of network.
__fup_C000002_0F_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_10_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+26 ;Export name of network.
__fup_C000002_10_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+27 ;Export name of network.
__fup_C000002_10_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_11_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+28 ;Export name of network.
__fup_C000002_11_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+29 ;Export name of network.
__fup_C000002_11_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_12_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+30 ;Export name of network.
__fup_C000002_12_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+31 ;Export name of network.
__fup_C000002_12_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_13_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+32 ;Export name of network.
__fup_C000002_13_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+33 ;Export name of network.
__fup_C000002_13_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_14_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+34 ;Export name of network.
__fup_C000002_14_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+35 ;Export name of network.
__fup_C000002_14_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_15_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+36 ;Export name of network.
__fup_C000002_15_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+37 ;Export name of network.
__fup_C000002_15_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_16_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+38 ;Export name of network.
__fup_C000002_16_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+39 ;Export name of network.
__fup_C000002_16_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_17_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+40 ;Export name of network.
__fup_C000002_17_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+41 ;Export name of network.
__fup_C000002_17_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_18_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+42 ;Export name of network.
__fup_C000002_18_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+43 ;Export name of network.
__fup_C000002_18_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_19_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+44 ;Export name of network.
__fup_C000002_19_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+45 ;Export name of network.
__fup_C000002_19_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1A_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+46 ;Export name of network.
__fup_C000002_1A_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+47 ;Export name of network.
__fup_C000002_1A_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1B_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+48 ;Export name of network.
__fup_C000002_1B_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+49 ;Export name of network.
__fup_C000002_1B_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1C_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+50 ;Export name of network.
__fup_C000002_1C_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+51 ;Export name of network.
__fup_C000002_1C_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1D_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+52 ;Export name of network.
__fup_C000002_1D_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+53 ;Export name of network.
__fup_C000002_1D_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1E_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+54 ;Export name of network.
__fup_C000002_1E_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+55 ;Export name of network.
__fup_C000002_1E_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_1F_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+56 ;Export name of network.
__fup_C000002_1F_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+57 ;Export name of network.
__fup_C000002_1F_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_20_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+58 ;Export name of network.
__fup_C000002_20_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+59 ;Export name of network.
__fup_C000002_20_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_21_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+60 ;Export name of network.
__fup_C000002_21_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+61 ;Export name of network.
__fup_C000002_21_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_22_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+62 ;Export name of network.
__fup_C000002_22_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+63 ;Export name of network.
__fup_C000002_22_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_23_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+64 ;Export name of network.
__fup_C000002_23_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+65 ;Export name of network.
__fup_C000002_23_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_24_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+66 ;Export name of network.
__fup_C000002_24_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+67 ;Export name of network.
__fup_C000002_24_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_25_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+68 ;Export name of network.
__fup_C000002_25_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+69 ;Export name of network.
__fup_C000002_25_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_26_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+70 ;Export name of network.
__fup_C000002_26_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+71 ;Export name of network.
__fup_C000002_26_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_27_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+72 ;Export name of network.
__fup_C000002_27_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+73 ;Export name of network.
__fup_C000002_27_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_28_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+74 ;Export name of network.
__fup_C000002_28_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+75 ;Export name of network.
__fup_C000002_28_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_29_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+76 ;Export name of network.
__fup_C000002_29_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+77 ;Export name of network.
__fup_C000002_29_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_2A_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+78 ;Export name of network.
__fup_C000002_2A_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+79 ;Export name of network.
__fup_C000002_2A_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
__fup_C000002_2B_27_1b___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+80 ;Export name of network.
__fup_C000002_2B_27_2a___SG_COB_SBus2       EQU                        ___FlgSta_C000002___SG_COB_SBus2+81 ;Export name of network.
__fup_C000002_2B_27_09___SG_COB_SBus2       EQU                        ___FlgDyn_C000002___SG_COB_SBus2+0 ;Export name of network.
;;End Dynamic symbol aliases allocated for this BLOCK
;;dynamic symbols allocated for this BLOCK
___RegDyn_C000003___SG_COB_SBus3		EQU		R [25]		;	Define 25 registers for dynamic usage.
___FlgDyn_C000003___SG_COB_SBus3		EQU		F [1]		;	Define 1 registers for dynamic usage.
___FlgSta_C000003___SG_COB_SBus3		EQU		F [80]		;	Define 80 registers for dynamic usage.
;;end of dynamic symbols allocated for this BLOCK

;;Start Static symbols allocated for this BLOCK
__stc_id_002C9_var_00___SG_COB_SBus3       EQU     F         [8]       ;static variable Fs[8]
__stc_id_002C9_var_01___SG_COB_SBus3       EQU     R         [3]       ;static variable Rs[3]
__stc_id_002C9_var_02___SG_COB_SBus3       EQU     R                    ;static variable RsT[1]
__stc_id_002C9_var_03___SG_COB_SBus3       EQU     F                    ;static variable FsE[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C9_var_04___SG_COB_SBus3       EQU     F                    ;static variable Clr[1]
__stc_id_002C9_var_05___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C9_var_06___SG_COB_SBus3       EQU     R                    ;static variable ADJ2[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C9_var_07___SG_COB_SBus3       EQU     R                    ;static variable ADJ3[1]
$IFNDEF	A.MACROS.SBus3
A.MACROS.SBus3		EQU				713  ;[_COMSASM4
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00269_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00269_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0026A_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026A_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0026B_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026B_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_1
A.MACROS.Rx_Stn_1		EQU				617  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_1
A.MACROS.Tx_Stn_1		EQU				618  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00266_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00266_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00267_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00267_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00268_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00268_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_2
A.MACROS.Rx_Stn_2		EQU				614  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_2
A.MACROS.Tx_Stn_2		EQU				615  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00263_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00263_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00264_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00264_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00265_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00265_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_3
A.MACROS.Rx_Stn_3		EQU				611  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_3
A.MACROS.Tx_Stn_3		EQU				612  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00260_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00260_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00261_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00261_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00262_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00262_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_4
A.MACROS.Rx_Stn_4		EQU				608  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_4
A.MACROS.Tx_Stn_4		EQU				609  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0025D_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025D_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0025E_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025E_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0025F_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025F_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_5
A.MACROS.Rx_Stn_5		EQU				605  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_5
A.MACROS.Tx_Stn_5		EQU				606  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0025A_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025A_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0025B_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025B_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0025C_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0025C_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_6
A.MACROS.Rx_Stn_6		EQU				602  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_6
A.MACROS.Tx_Stn_6		EQU				603  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00257_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00257_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00258_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00258_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00259_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00259_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_7
A.MACROS.Rx_Stn_7		EQU				599  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_7
A.MACROS.Tx_Stn_7		EQU				600  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00254_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00254_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00255_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00255_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00256_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00256_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_8
A.MACROS.Rx_Stn_8		EQU				596  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_8
A.MACROS.Tx_Stn_8		EQU				597  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00251_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00251_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00252_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00252_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00253_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00253_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_9
A.MACROS.Rx_Stn_9		EQU				593  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_9
A.MACROS.Tx_Stn_9		EQU				594  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002C3_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C3_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C4_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C4_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C5_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C5_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_10
A.MACROS.Rx_Stn_10		EQU				707  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_10
A.MACROS.Tx_Stn_10		EQU				708  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002C0_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C0_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C1_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C1_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C2_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C2_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_11
A.MACROS.Rx_Stn_11		EQU				704  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_11
A.MACROS.Tx_Stn_11		EQU				705  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002BD_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BD_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002BE_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BE_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002BF_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BF_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_12
A.MACROS.Rx_Stn_12		EQU				701  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_12
A.MACROS.Tx_Stn_12		EQU				702  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002BA_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BA_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002BB_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BB_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002BC_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002BC_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_13
A.MACROS.Rx_Stn_13		EQU				698  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_13
A.MACROS.Tx_Stn_13		EQU				699  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002B7_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B7_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B8_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B8_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B9_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B9_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_14
A.MACROS.Rx_Stn_14		EQU				695  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_14
A.MACROS.Tx_Stn_14		EQU				696  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002B4_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B4_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B5_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B5_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B6_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B6_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_15
A.MACROS.Rx_Stn_15		EQU				692  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_15
A.MACROS.Tx_Stn_15		EQU				693  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002B1_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B1_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B2_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B2_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B3_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B3_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_16
A.MACROS.Rx_Stn_16		EQU				689  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_16
A.MACROS.Tx_Stn_16		EQU				690  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002AE_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AE_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002AF_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AF_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002B0_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002B0_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_17
A.MACROS.Rx_Stn_17		EQU				686  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_17
A.MACROS.Tx_Stn_17		EQU				687  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002AB_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AB_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002AC_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AC_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002AD_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AD_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_18
A.MACROS.Rx_Stn_18		EQU				683  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_18
A.MACROS.Tx_Stn_18		EQU				684  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002A8_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A8_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A9_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A9_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002AA_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002AA_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_19
A.MACROS.Rx_Stn_19		EQU				680  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_19
A.MACROS.Tx_Stn_19		EQU				681  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002A5_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A5_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A6_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A6_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A7_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A7_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_20
A.MACROS.Rx_Stn_20		EQU				677  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_20
A.MACROS.Tx_Stn_20		EQU				678  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002A2_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A2_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A3_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A3_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A4_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A4_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_21
A.MACROS.Rx_Stn_21		EQU				674  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_21
A.MACROS.Tx_Stn_21		EQU				675  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0029F_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029F_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A0_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A0_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002A1_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002A1_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_22
A.MACROS.Rx_Stn_22		EQU				671  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_22
A.MACROS.Tx_Stn_22		EQU				672  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0029C_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029C_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0029D_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029D_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0029E_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029E_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_23
A.MACROS.Rx_Stn_23		EQU				668  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_23
A.MACROS.Tx_Stn_23		EQU				669  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00299_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00299_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0029A_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029A_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0029B_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0029B_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_24
A.MACROS.Rx_Stn_24		EQU				665  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_24
A.MACROS.Tx_Stn_24		EQU				666  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00296_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00296_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00297_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00297_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00298_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00298_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_25
A.MACROS.Rx_Stn_25		EQU				662  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_25
A.MACROS.Tx_Stn_25		EQU				663  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00293_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00293_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00294_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00294_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00295_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00295_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_26
A.MACROS.Rx_Stn_26		EQU				659  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_26
A.MACROS.Tx_Stn_26		EQU				660  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00290_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00290_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00291_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00291_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00292_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00292_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_27
A.MACROS.Rx_Stn_27		EQU				656  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_27
A.MACROS.Tx_Stn_27		EQU				657  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0028D_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028D_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0028E_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028E_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0028F_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028F_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_28
A.MACROS.Rx_Stn_28		EQU				653  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_28
A.MACROS.Tx_Stn_28		EQU				654  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0028A_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028A_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0028B_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028B_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0028C_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0028C_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_29
A.MACROS.Rx_Stn_29		EQU				650  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_29
A.MACROS.Tx_Stn_29		EQU				651  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00287_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00287_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00288_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00288_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00289_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00289_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_30
A.MACROS.Rx_Stn_30		EQU				647  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_30
A.MACROS.Tx_Stn_30		EQU				648  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00284_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00284_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00285_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00285_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00286_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00286_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_31
A.MACROS.Rx_Stn_31		EQU				644  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_31
A.MACROS.Tx_Stn_31		EQU				645  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00281_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00281_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00282_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00282_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00283_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00283_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_32
A.MACROS.Rx_Stn_32		EQU				641  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_32
A.MACROS.Tx_Stn_32		EQU				642  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0027E_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027E_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0027F_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027F_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00280_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00280_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_33
A.MACROS.Rx_Stn_33		EQU				638  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_33
A.MACROS.Tx_Stn_33		EQU				639  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0027B_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027B_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0027C_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027C_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0027D_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027D_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_34
A.MACROS.Rx_Stn_34		EQU				635  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_34
A.MACROS.Tx_Stn_34		EQU				636  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00278_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00278_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00279_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00279_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0027A_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0027A_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_35
A.MACROS.Rx_Stn_35		EQU				632  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_35
A.MACROS.Tx_Stn_35		EQU				633  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00275_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00275_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00276_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00276_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00277_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00277_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_36
A.MACROS.Rx_Stn_36		EQU				629  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_36
A.MACROS.Tx_Stn_36		EQU				630  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00272_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00272_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00273_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00273_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00274_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00274_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_37
A.MACROS.Rx_Stn_37		EQU				626  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_37
A.MACROS.Tx_Stn_37		EQU				627  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0026F_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026F_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00270_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00270_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00271_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_00271_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_38
A.MACROS.Rx_Stn_38		EQU				623  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_38
A.MACROS.Tx_Stn_38		EQU				624  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0026C_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026C_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0026D_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026D_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0026E_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_0026E_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_39
A.MACROS.Rx_Stn_39		EQU				620  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_39
A.MACROS.Tx_Stn_39		EQU				621  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002C6_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C6_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C7_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C7_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002C8_var_00___SG_COB_SBus3       EQU     F                    ;static variable Fs[1]
__stc_id_002C8_var_01___SG_COB_SBus3       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_40
A.MACROS.Rx_Stn_40		EQU				710  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_40
A.MACROS.Tx_Stn_40		EQU				711  ;[_COMTXI4Q
$ENDIF
;;End Static symbols allocated for this BLOCK
;;Start Dynamic symbol aliases allocated for this BLOCK
__fup_C000003_02_35_0c___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_02_35_0d___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+1 ;Export name of network.
__fup_C000003_02_35_0e___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+2 ;Export name of network.
__fup_C000003_02_35_0f___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+3 ;Export name of network.
__fup_C000003_02_35_10___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+4 ;Export name of network.
__fup_C000003_02_35_11___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+5 ;Export name of network.
__fup_C000003_02_35_12___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+6 ;Export name of network.
__fup_C000003_02_35_13___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+7 ;Export name of network.
__fup_C000003_02_35_14___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+8 ;Export name of network.
__fup_C000003_02_35_15___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+9 ;Export name of network.
__fup_C000003_02_35_16___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+10 ;Export name of network.
__fup_C000003_02_35_17___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+11 ;Export name of network.
__fup_C000003_02_35_18___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+12 ;Export name of network.
__fup_C000003_02_35_19___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+13 ;Export name of network.
__fup_C000003_02_35_1a___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+14 ;Export name of network.
__fup_C000003_02_35_1b___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+15 ;Export name of network.
__fup_C000003_02_35_1c___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+16 ;Export name of network.
__fup_C000003_02_35_1d___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+17 ;Export name of network.
__fup_C000003_02_35_1e___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+18 ;Export name of network.
__fup_C000003_02_35_1f___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+19 ;Export name of network.
__fup_C000003_02_35_20___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+20 ;Export name of network.
__fup_C000003_02_35_21___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+21 ;Export name of network.
__fup_C000003_02_35_22___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+22 ;Export name of network.
__fup_C000003_02_35_23___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+23 ;Export name of network.
__fup_C000003_02_35_24___SG_COB_SBus3       EQU                        ___RegDyn_C000003___SG_COB_SBus3+24 ;Export name of network.
__fup_C000003_03_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_03_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+1 ;Export name of network.
__fup_C000003_03_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_04_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+2 ;Export name of network.
__fup_C000003_04_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+3 ;Export name of network.
__fup_C000003_04_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_05_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+4 ;Export name of network.
__fup_C000003_05_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+5 ;Export name of network.
__fup_C000003_05_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_06_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+6 ;Export name of network.
__fup_C000003_06_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+7 ;Export name of network.
__fup_C000003_06_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_07_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+8 ;Export name of network.
__fup_C000003_07_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+9 ;Export name of network.
__fup_C000003_07_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_08_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+10 ;Export name of network.
__fup_C000003_08_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+11 ;Export name of network.
__fup_C000003_08_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_09_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+12 ;Export name of network.
__fup_C000003_09_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+13 ;Export name of network.
__fup_C000003_09_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0A_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+14 ;Export name of network.
__fup_C000003_0A_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+15 ;Export name of network.
__fup_C000003_0A_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0B_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+16 ;Export name of network.
__fup_C000003_0B_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+17 ;Export name of network.
__fup_C000003_0B_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0C_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+18 ;Export name of network.
__fup_C000003_0C_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+19 ;Export name of network.
__fup_C000003_0C_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0D_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+20 ;Export name of network.
__fup_C000003_0D_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+21 ;Export name of network.
__fup_C000003_0D_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0E_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+22 ;Export name of network.
__fup_C000003_0E_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+23 ;Export name of network.
__fup_C000003_0E_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_0F_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+24 ;Export name of network.
__fup_C000003_0F_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+25 ;Export name of network.
__fup_C000003_0F_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_10_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+26 ;Export name of network.
__fup_C000003_10_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+27 ;Export name of network.
__fup_C000003_10_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_11_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+28 ;Export name of network.
__fup_C000003_11_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+29 ;Export name of network.
__fup_C000003_11_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_12_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+30 ;Export name of network.
__fup_C000003_12_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+31 ;Export name of network.
__fup_C000003_12_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_13_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+32 ;Export name of network.
__fup_C000003_13_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+33 ;Export name of network.
__fup_C000003_13_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_14_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+34 ;Export name of network.
__fup_C000003_14_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+35 ;Export name of network.
__fup_C000003_14_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_15_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+36 ;Export name of network.
__fup_C000003_15_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+37 ;Export name of network.
__fup_C000003_15_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_16_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+38 ;Export name of network.
__fup_C000003_16_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+39 ;Export name of network.
__fup_C000003_16_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_17_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+40 ;Export name of network.
__fup_C000003_17_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+41 ;Export name of network.
__fup_C000003_17_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_18_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+42 ;Export name of network.
__fup_C000003_18_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+43 ;Export name of network.
__fup_C000003_18_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_19_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+44 ;Export name of network.
__fup_C000003_19_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+45 ;Export name of network.
__fup_C000003_19_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1A_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+46 ;Export name of network.
__fup_C000003_1A_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+47 ;Export name of network.
__fup_C000003_1A_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1B_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+48 ;Export name of network.
__fup_C000003_1B_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+49 ;Export name of network.
__fup_C000003_1B_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1C_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+50 ;Export name of network.
__fup_C000003_1C_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+51 ;Export name of network.
__fup_C000003_1C_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1D_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+52 ;Export name of network.
__fup_C000003_1D_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+53 ;Export name of network.
__fup_C000003_1D_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1E_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+54 ;Export name of network.
__fup_C000003_1E_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+55 ;Export name of network.
__fup_C000003_1E_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_1F_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+56 ;Export name of network.
__fup_C000003_1F_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+57 ;Export name of network.
__fup_C000003_1F_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_20_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+58 ;Export name of network.
__fup_C000003_20_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+59 ;Export name of network.
__fup_C000003_20_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_21_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+60 ;Export name of network.
__fup_C000003_21_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+61 ;Export name of network.
__fup_C000003_21_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_22_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+62 ;Export name of network.
__fup_C000003_22_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+63 ;Export name of network.
__fup_C000003_22_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_23_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+64 ;Export name of network.
__fup_C000003_23_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+65 ;Export name of network.
__fup_C000003_23_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_24_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+66 ;Export name of network.
__fup_C000003_24_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+67 ;Export name of network.
__fup_C000003_24_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_25_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+68 ;Export name of network.
__fup_C000003_25_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+69 ;Export name of network.
__fup_C000003_25_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_26_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+70 ;Export name of network.
__fup_C000003_26_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+71 ;Export name of network.
__fup_C000003_26_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_27_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+72 ;Export name of network.
__fup_C000003_27_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+73 ;Export name of network.
__fup_C000003_27_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_28_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+74 ;Export name of network.
__fup_C000003_28_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+75 ;Export name of network.
__fup_C000003_28_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_29_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+76 ;Export name of network.
__fup_C000003_29_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+77 ;Export name of network.
__fup_C000003_29_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
__fup_C000003_2A_27_1b___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+78 ;Export name of network.
__fup_C000003_2A_27_2a___SG_COB_SBus3       EQU                        ___FlgSta_C000003___SG_COB_SBus3+79 ;Export name of network.
__fup_C000003_2A_27_09___SG_COB_SBus3       EQU                        ___FlgDyn_C000003___SG_COB_SBus3+0 ;Export name of network.
;;End Dynamic symbol aliases allocated for this BLOCK
;;dynamic symbols allocated for this BLOCK
___RegDyn_C000004___SG_COB_SBus4		EQU		R [25]		;	Define 25 registers for dynamic usage.
___FlgDyn_C000004___SG_COB_SBus4		EQU		F [1]		;	Define 1 registers for dynamic usage.
___FlgSta_C000004___SG_COB_SBus4		EQU		F [82]		;	Define 82 registers for dynamic usage.
;;end of dynamic symbols allocated for this BLOCK

;;Start Static symbols allocated for this BLOCK
__stc_id_00345_var_00___SG_COB_SBus4       EQU     F         [8]       ;static variable Fs[8]
__stc_id_00345_var_01___SG_COB_SBus4       EQU     R         [3]       ;static variable Rs[3]
__stc_id_00345_var_02___SG_COB_SBus4       EQU     R                    ;static variable RsT[1]
__stc_id_00345_var_03___SG_COB_SBus4       EQU     F                    ;static variable FsE[1]
$ATTR TAGS=S_ADJUST
__stc_id_00345_var_04___SG_COB_SBus4       EQU     F                    ;static variable Clr[1]
__stc_id_00345_var_05___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00345_var_06___SG_COB_SBus4       EQU     R                    ;static variable ADJ2[1]
$ATTR TAGS=S_ADJUST
__stc_id_00345_var_07___SG_COB_SBus4       EQU     R                    ;static variable ADJ3[1]
$IFNDEF	A.MACROS.SBus4
A.MACROS.SBus4		EQU				837  ;[_COMSASM4
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0033F_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033F_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00340_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00340_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00341_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00341_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_1
A.MACROS.Rx_Stn_1		EQU				831  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_1
A.MACROS.Tx_Stn_1		EQU				832  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0033C_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033C_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0033D_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033D_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0033E_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033E_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_2
A.MACROS.Rx_Stn_2		EQU				828  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_2
A.MACROS.Tx_Stn_2		EQU				829  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00339_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00339_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0033A_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033A_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0033B_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0033B_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_3
A.MACROS.Rx_Stn_3		EQU				825  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_3
A.MACROS.Tx_Stn_3		EQU				826  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00336_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00336_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00337_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00337_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00338_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00338_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_4
A.MACROS.Rx_Stn_4		EQU				822  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_4
A.MACROS.Tx_Stn_4		EQU				823  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00333_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00333_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00334_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00334_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00335_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00335_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_5
A.MACROS.Rx_Stn_5		EQU				819  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_5
A.MACROS.Tx_Stn_5		EQU				820  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00330_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00330_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00331_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00331_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00332_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00332_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_6
A.MACROS.Rx_Stn_6		EQU				816  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_6
A.MACROS.Tx_Stn_6		EQU				817  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0032D_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032D_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0032E_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032E_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0032F_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032F_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_7
A.MACROS.Rx_Stn_7		EQU				813  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_7
A.MACROS.Tx_Stn_7		EQU				814  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0032A_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032A_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0032B_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032B_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0032C_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0032C_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_8
A.MACROS.Rx_Stn_8		EQU				810  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_8
A.MACROS.Tx_Stn_8		EQU				811  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00327_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00327_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00328_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00328_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00329_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00329_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_9
A.MACROS.Rx_Stn_9		EQU				807  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_9
A.MACROS.Tx_Stn_9		EQU				808  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00324_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00324_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00325_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00325_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00326_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00326_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_10
A.MACROS.Rx_Stn_10		EQU				804  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_10
A.MACROS.Tx_Stn_10		EQU				805  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00321_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00321_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00322_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00322_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00323_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00323_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_11
A.MACROS.Rx_Stn_11		EQU				801  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_11
A.MACROS.Tx_Stn_11		EQU				802  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0031E_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031E_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0031F_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031F_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00320_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00320_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_12
A.MACROS.Rx_Stn_12		EQU				798  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_12
A.MACROS.Tx_Stn_12		EQU				799  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0031B_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031B_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0031C_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031C_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0031D_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031D_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_13
A.MACROS.Rx_Stn_13		EQU				795  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_13
A.MACROS.Tx_Stn_13		EQU				796  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00318_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00318_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00319_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00319_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0031A_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0031A_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_14
A.MACROS.Rx_Stn_14		EQU				792  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_14
A.MACROS.Tx_Stn_14		EQU				793  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00315_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00315_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00316_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00316_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00317_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00317_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_15
A.MACROS.Rx_Stn_15		EQU				789  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_15
A.MACROS.Tx_Stn_15		EQU				790  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00312_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00312_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00313_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00313_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00314_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00314_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_16
A.MACROS.Rx_Stn_16		EQU				786  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_16
A.MACROS.Tx_Stn_16		EQU				787  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0030F_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030F_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00310_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00310_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00311_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00311_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_17
A.MACROS.Rx_Stn_17		EQU				783  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_17
A.MACROS.Tx_Stn_17		EQU				784  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_0030C_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030C_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0030D_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030D_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0030E_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030E_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_18
A.MACROS.Rx_Stn_18		EQU				780  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_18
A.MACROS.Tx_Stn_18		EQU				781  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00309_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00309_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0030A_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030A_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_0030B_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_0030B_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_19
A.MACROS.Rx_Stn_19		EQU				777  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_19
A.MACROS.Tx_Stn_19		EQU				778  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00306_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00306_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00307_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00307_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00308_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00308_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_20
A.MACROS.Rx_Stn_20		EQU				774  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_20
A.MACROS.Tx_Stn_20		EQU				775  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00303_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00303_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00304_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00304_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00305_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00305_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_21
A.MACROS.Rx_Stn_21		EQU				771  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_21
A.MACROS.Tx_Stn_21		EQU				772  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00300_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00300_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00301_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00301_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00302_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00302_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_22
A.MACROS.Rx_Stn_22		EQU				768  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_22
A.MACROS.Tx_Stn_22		EQU				769  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002FD_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FD_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002FE_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FE_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002FF_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FF_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_23
A.MACROS.Rx_Stn_23		EQU				765  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_23
A.MACROS.Tx_Stn_23		EQU				766  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002FA_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FA_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002FB_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FB_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002FC_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002FC_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_24
A.MACROS.Rx_Stn_24		EQU				762  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_24
A.MACROS.Tx_Stn_24		EQU				763  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002F7_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F7_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F8_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F8_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F9_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F9_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_25
A.MACROS.Rx_Stn_25		EQU				759  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_25
A.MACROS.Tx_Stn_25		EQU				760  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002F4_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F4_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F5_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F5_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F6_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F6_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_26
A.MACROS.Rx_Stn_26		EQU				756  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_26
A.MACROS.Tx_Stn_26		EQU				757  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002F1_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F1_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F2_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F2_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F3_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F3_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_27
A.MACROS.Rx_Stn_27		EQU				753  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_27
A.MACROS.Tx_Stn_27		EQU				754  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002EE_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002EE_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002EF_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002EF_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002F0_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002F0_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_28
A.MACROS.Rx_Stn_28		EQU				750  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_28
A.MACROS.Tx_Stn_28		EQU				751  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002EB_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002EB_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002EC_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002EC_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002ED_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002ED_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_29
A.MACROS.Rx_Stn_29		EQU				747  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_29
A.MACROS.Tx_Stn_29		EQU				748  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002E8_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E8_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E9_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E9_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002EA_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002EA_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_30
A.MACROS.Rx_Stn_30		EQU				744  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_30
A.MACROS.Tx_Stn_30		EQU				745  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002E5_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E5_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E6_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E6_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E7_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E7_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_31
A.MACROS.Rx_Stn_31		EQU				741  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_31
A.MACROS.Tx_Stn_31		EQU				742  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002E2_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E2_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E3_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E3_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E4_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E4_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_32
A.MACROS.Rx_Stn_32		EQU				738  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_32
A.MACROS.Tx_Stn_32		EQU				739  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002DF_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DF_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E0_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E0_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002E1_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002E1_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_33
A.MACROS.Rx_Stn_33		EQU				735  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_33
A.MACROS.Tx_Stn_33		EQU				736  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002DC_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DC_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002DD_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DD_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002DE_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DE_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_34
A.MACROS.Rx_Stn_34		EQU				732  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_34
A.MACROS.Tx_Stn_34		EQU				733  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002D9_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D9_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002DA_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DA_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002DB_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002DB_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_35
A.MACROS.Rx_Stn_35		EQU				729  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_35
A.MACROS.Tx_Stn_35		EQU				730  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002D6_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D6_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D7_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D7_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D8_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D8_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_36
A.MACROS.Rx_Stn_36		EQU				726  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_36
A.MACROS.Tx_Stn_36		EQU				727  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002D3_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D3_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D4_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D4_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D5_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D5_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_37
A.MACROS.Rx_Stn_37		EQU				723  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_37
A.MACROS.Tx_Stn_37		EQU				724  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002D0_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D0_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D1_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D1_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002D2_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002D2_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_38
A.MACROS.Rx_Stn_38		EQU				720  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_38
A.MACROS.Tx_Stn_38		EQU				721  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002CD_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CD_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002CE_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CE_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002CF_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CF_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_39
A.MACROS.Rx_Stn_39		EQU				717  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_39
A.MACROS.Tx_Stn_39		EQU				718  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_002CA_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CA_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002CB_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CB_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_002CC_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_002CC_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_40
A.MACROS.Rx_Stn_40		EQU				714  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_40
A.MACROS.Tx_Stn_40		EQU				715  ;[_COMTXI4Q
$ENDIF
$ATTR TAGS=S_ADJUST
__stc_id_00346_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00346_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00347_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00347_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$ATTR TAGS=S_ADJUST
__stc_id_00348_var_00___SG_COB_SBus4       EQU     F                    ;static variable Fs[1]
__stc_id_00348_var_01___SG_COB_SBus4       EQU     F                    ;static variable LED[1]
$IFNDEF	A.MACROS.Rx_Stn_41
A.MACROS.Rx_Stn_41		EQU				838  ;[_COMRXI4Q
$ENDIF
$IFNDEF	A.MACROS.Tx_Stn_41
A.MACROS.Tx_Stn_41		EQU				839  ;[_COMTXI4Q
$ENDIF
;;End Static symbols allocated for this BLOCK
;;Start Dynamic symbol aliases allocated for this BLOCK
__fup_C000004_02_35_0c___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_02_35_0d___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+1 ;Export name of network.
__fup_C000004_02_35_0e___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+2 ;Export name of network.
__fup_C000004_02_35_0f___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+3 ;Export name of network.
__fup_C000004_02_35_10___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+4 ;Export name of network.
__fup_C000004_02_35_11___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+5 ;Export name of network.
__fup_C000004_02_35_12___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+6 ;Export name of network.
__fup_C000004_02_35_13___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+7 ;Export name of network.
__fup_C000004_02_35_14___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+8 ;Export name of network.
__fup_C000004_02_35_15___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+9 ;Export name of network.
__fup_C000004_02_35_16___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+10 ;Export name of network.
__fup_C000004_02_35_17___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+11 ;Export name of network.
__fup_C000004_02_35_18___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+12 ;Export name of network.
__fup_C000004_02_35_19___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+13 ;Export name of network.
__fup_C000004_02_35_1a___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+14 ;Export name of network.
__fup_C000004_02_35_1b___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+15 ;Export name of network.
__fup_C000004_02_35_1c___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+16 ;Export name of network.
__fup_C000004_02_35_1d___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+17 ;Export name of network.
__fup_C000004_02_35_1e___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+18 ;Export name of network.
__fup_C000004_02_35_1f___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+19 ;Export name of network.
__fup_C000004_02_35_20___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+20 ;Export name of network.
__fup_C000004_02_35_21___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+21 ;Export name of network.
__fup_C000004_02_35_22___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+22 ;Export name of network.
__fup_C000004_02_35_23___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+23 ;Export name of network.
__fup_C000004_02_35_24___SG_COB_SBus4       EQU                        ___RegDyn_C000004___SG_COB_SBus4+24 ;Export name of network.
__fup_C000004_03_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_03_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+1 ;Export name of network.
__fup_C000004_03_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_04_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+2 ;Export name of network.
__fup_C000004_04_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+3 ;Export name of network.
__fup_C000004_04_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_05_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+4 ;Export name of network.
__fup_C000004_05_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+5 ;Export name of network.
__fup_C000004_05_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_06_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+6 ;Export name of network.
__fup_C000004_06_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+7 ;Export name of network.
__fup_C000004_06_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_07_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+8 ;Export name of network.
__fup_C000004_07_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+9 ;Export name of network.
__fup_C000004_07_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_08_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+10 ;Export name of network.
__fup_C000004_08_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+11 ;Export name of network.
__fup_C000004_08_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_09_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+12 ;Export name of network.
__fup_C000004_09_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+13 ;Export name of network.
__fup_C000004_09_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0A_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+14 ;Export name of network.
__fup_C000004_0A_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+15 ;Export name of network.
__fup_C000004_0A_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0B_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+16 ;Export name of network.
__fup_C000004_0B_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+17 ;Export name of network.
__fup_C000004_0B_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0C_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+18 ;Export name of network.
__fup_C000004_0C_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+19 ;Export name of network.
__fup_C000004_0C_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0D_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+20 ;Export name of network.
__fup_C000004_0D_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+21 ;Export name of network.
__fup_C000004_0D_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0E_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+22 ;Export name of network.
__fup_C000004_0E_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+23 ;Export name of network.
__fup_C000004_0E_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_0F_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+24 ;Export name of network.
__fup_C000004_0F_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+25 ;Export name of network.
__fup_C000004_0F_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_10_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+26 ;Export name of network.
__fup_C000004_10_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+27 ;Export name of network.
__fup_C000004_10_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_11_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+28 ;Export name of network.
__fup_C000004_11_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+29 ;Export name of network.
__fup_C000004_11_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_12_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+30 ;Export name of network.
__fup_C000004_12_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+31 ;Export name of network.
__fup_C000004_12_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_13_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+32 ;Export name of network.
__fup_C000004_13_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+33 ;Export name of network.
__fup_C000004_13_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_14_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+34 ;Export name of network.
__fup_C000004_14_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+35 ;Export name of network.
__fup_C000004_14_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_15_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+36 ;Export name of network.
__fup_C000004_15_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+37 ;Export name of network.
__fup_C000004_15_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_16_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+38 ;Export name of network.
__fup_C000004_16_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+39 ;Export name of network.
__fup_C000004_16_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_17_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+40 ;Export name of network.
__fup_C000004_17_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+41 ;Export name of network.
__fup_C000004_17_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_18_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+42 ;Export name of network.
__fup_C000004_18_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+43 ;Export name of network.
__fup_C000004_18_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_19_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+44 ;Export name of network.
__fup_C000004_19_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+45 ;Export name of network.
__fup_C000004_19_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1A_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+46 ;Export name of network.
__fup_C000004_1A_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+47 ;Export name of network.
__fup_C000004_1A_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1B_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+48 ;Export name of network.
__fup_C000004_1B_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+49 ;Export name of network.
__fup_C000004_1B_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1C_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+50 ;Export name of network.
__fup_C000004_1C_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+51 ;Export name of network.
__fup_C000004_1C_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1D_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+52 ;Export name of network.
__fup_C000004_1D_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+53 ;Export name of network.
__fup_C000004_1D_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1E_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+54 ;Export name of network.
__fup_C000004_1E_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+55 ;Export name of network.
__fup_C000004_1E_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_1F_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+56 ;Export name of network.
__fup_C000004_1F_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+57 ;Export name of network.
__fup_C000004_1F_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_20_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+58 ;Export name of network.
__fup_C000004_20_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+59 ;Export name of network.
__fup_C000004_20_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_21_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+60 ;Export name of network.
__fup_C000004_21_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+61 ;Export name of network.
__fup_C000004_21_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_22_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+62 ;Export name of network.
__fup_C000004_22_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+63 ;Export name of network.
__fup_C000004_22_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_23_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+64 ;Export name of network.
__fup_C000004_23_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+65 ;Export name of network.
__fup_C000004_23_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_24_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+66 ;Export name of network.
__fup_C000004_24_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+67 ;Export name of network.
__fup_C000004_24_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_25_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+68 ;Export name of network.
__fup_C000004_25_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+69 ;Export name of network.
__fup_C000004_25_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_26_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+70 ;Export name of network.
__fup_C000004_26_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+71 ;Export name of network.
__fup_C000004_26_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_27_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+72 ;Export name of network.
__fup_C000004_27_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+73 ;Export name of network.
__fup_C000004_27_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_28_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+74 ;Export name of network.
__fup_C000004_28_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+75 ;Export name of network.
__fup_C000004_28_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_29_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+76 ;Export name of network.
__fup_C000004_29_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+77 ;Export name of network.
__fup_C000004_29_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_2A_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+78 ;Export name of network.
__fup_C000004_2A_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+79 ;Export name of network.
__fup_C000004_2A_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
__fup_C000004_2B_27_1b___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+80 ;Export name of network.
__fup_C000004_2B_27_2a___SG_COB_SBus4       EQU                        ___FlgSta_C000004___SG_COB_SBus4+81 ;Export name of network.
__fup_C000004_2B_27_09___SG_COB_SBus4       EQU                        ___FlgDyn_C000004___SG_COB_SBus4+0 ;Export name of network.
;;End Dynamic symbol aliases allocated for this BLOCK
