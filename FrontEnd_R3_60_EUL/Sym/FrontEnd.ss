S.SYS.SASMVERS EQU 2003165 ;Assembler/linker version, new format (abbbccc)
S.PRJ.FrontEnd_R3_60_EUL.SbusStation EQU 0 ;S-Bus station number
S.CPU.PcdType EQU 35 ;PCD types, see __PCDx_Mxxx__ symbols
S.CPU.Eline_System EQU 0 ;0=not an E-line type
S.CPU.NT_System EQU 1 ;1 for new PCD types, 0 for old
S.CPU.Cpu EQU 0 ;CPU number
S.CPU.PCD3_System EQU 35 ;PCD3 type, or 0 if not PCD3
S.CPU.PCD2M5_System EQU 0 ;PCD2_M5 type, or 0 if not PCD2_M5
S.CPU.MinFWVersion EQU 12800 ;Min firmware
S.CPU.MaxFWVersion EQU 999999 ;Max firmware version not defined
S.CPU.FullHandshakeOnPort0 EQU 1 ;Full RS-232 handshaking on Port 0
S.CPU.Xob1Enable EQU 0 ;XOB 1 enabled
S.CPU.SbusStation EQU 0 ;S-Bus station number
S.CPU.SbusPguPort EQU -1 ;Serial PGU port number, -1=none
S.CPU.SbusBaudRate EQU 9600 ;Serial port baud rate
S.CPU.SbusMode EQU 2 ;Serial port mode, 0=Break, 1=Parity, 2=Data
S.CPU.SbusModemPort EQU -1 ;Modem port number, -1=none
S.CPU.SbusModemBaudRate EQU 9600 ;Modem baud rate
S.CPU.SbusModemMode EQU 2 ;0=Break, 1=Parity, 2=Data
S.CPU.IPNode EQU 79 ;IP node number
S.CPU.IPChannel EQU 9 ;IP channel number
S.CPU.IPAddress EQU 0A006B4FH ;IP address : 10.0.107.79
S.CPU.IPSubnetMask EQU 0FFFFFF00H ;Subnet mask : 255.255.255.0
S.CPU.IPDefaultRouter EQU 0A006B01H ;Default router : 10.0.107.1
S.CPU.EnergyMonitoringEnabled EQU 0 ;Energy monitoring function enabled
S.CPU.Interrupt0XOB EQU 20 ;Interrupt XOB number defined in the Device Configurator
S.CPU.Interrupt1XOB EQU 21 ;Interrupt XOB number defined in the Device Configurator
S.ODM.Initialized EQU 1 ;ODM Init has been activated in SPM
S.ODM.ReadTimeout EQU 1000 ;Telegram reading timeout
S.CPU.ProgramVersion EQU 1000000 ;Program Version 1.0
S.CPU.LastTimer EQU T 160 ;Last timer number
S.CPU.TimerTimebase EQU 100 ;Timer timebase in ms
S.CPU.FirstCounter EQU C 161 ;First counter number
S.CPU.HasVolatileFlags EQU 0 ;1=has volatile Flags
S.CPU.LastVolatileFlag EQU -1 ;There are no volatile Flags
S.CPU.FirstNonvolatileFlag EQU F 0 ;Flags from F 0 are nonvolatile
S.CPU.FirstDynCounter EQU C 1000 ;First dynamic Counter address
S.CPU.LastDynCounter EQU C 1599 ;Last dynamic Counter address
S.CPU.FirstDynTimer EQU T 10 ;First dynamic Timer address
S.CPU.LastDynTimer EQU T 160 ;Last dynamic Timer address
S.CPU.FirstDynRegister EQU R 2000 ;First dynamic Register address
S.CPU.LastDynRegister EQU R 2999 ;Last dynamic Register address
S.CPU.FirstDynFlag EQU F 2000 ;First dynamic Flag address
S.CPU.LastDynFlag EQU F 8191 ;Last dynamic Flag address
S.CPU.FirstDynText EQU TEXT 3000 ;First dynamic Text address
S.CPU.LastDynText EQU TEXT 3499 ;Last dynamic Text address
S.CPU.FirstDynDB EQU DB 3500 ;First dynamic DB address
S.CPU.LastDynDB EQU DB 3999 ;Last dynamic DB address
S.CPU.FirstDynRamText EQU TEXT 5000 ;First dynamic RAM Text address
S.CPU.LastDynRamText EQU TEXT 6599 ;Last dynamic RAM Text address
S.CPU.FirstDynRamDB EQU DB 6600 ;First dynamic RAM DB address
S.CPU.LastDynRamDB EQU DB 8191 ;Last dynamic RAM DB address
S.CPU.MaxFlag EQU 16383 ;Last Flag number
S.CPU.MaxReg EQU 16383 ;Last Register number
S.CPU.MaxCounter EQU 1599 ;Last Counter number
S.CPU.Use16BitAddressing EQU 1 ;Use 16-bit Register and Flag addressing (FW >= 1.20.00)
S.CPU.NoDirectIOAccess EQU 0 ;1 if I|O addresses cannot be used
S.CPU.FirstWritableTextDB EQU 4000 ;First writable Text/DB number (-1=not supported)
S.PRJ.AppLanguage EQU 'en' ;Preferred language for applications
S.PRJ.LibLanguage EQU 'en' ;Preferred language for libraries
S.PRJ.ANSICodePage EQU 1252 ;PC's Windows ANSI code page
S.PRJ.FrontEnd_R3_60_EUL_anlegg.SbusStation EQU 0 ;
S.PRJ.Master_R60_korr.SbusStation EQU 0 ;
S.PRJ.Rom_1.SbusStation EQU 1 ;
S.PRJ.Rom_2.SbusStation EQU 2 ;
S.PRJ.Rom_3.SbusStation EQU 3 ;
S.PRJ.Rom_4.SbusStation EQU 4 ;
S.PRJ.Rom_5.SbusStation EQU 5 ;
S.PRJ.Rom_6.SbusStation EQU 6 ;
S.PRJ.Rom_313.SbusStation EQU 1 ;
S.PRJ.Rom_361.SbusStation EQU 10 ;
S.PRJ.Rom_362.SbusStation EQU 11 ;
S.PRJ.Rom_363.SbusStation EQU 37 ;
S.PRJ.Rom_364.SbusStation EQU 13 ;
S.PRJ.Rom_365.SbusStation EQU 14 ;
S.PRJ.Rom_366.SbusStation EQU 15 ;
S.PRJ.Rom_367.SbusStation EQU 16 ;
S.PRJ.Rom_368.SbusStation EQU 17 ;
S.PRJ.Rom_369.SbusStation EQU 18 ;
S.PRJ.Rom_370.SbusStation EQU 19 ;
S.PRJ.Rom_371.SbusStation EQU 20 ;
S.PRJ.Rom_372.SbusStation EQU 21 ;
S.PRJ.Rom_373.SbusStation EQU 22 ;
S.PRJ.Rom_374.SbusStation EQU 23 ;
S.PRJ.Rom_376.SbusStation EQU 24 ;
S.PRJ.Rom_461.SbusStation EQU 25 ;
S.PRJ.Rom_462.SbusStation EQU 26 ;
S.PRJ.Rom_463.SbusStation EQU 27 ;
S.PRJ.Rom_464.SbusStation EQU 28 ;
S.PRJ.Rom_465.SbusStation EQU 29 ;
S.PRJ.Rom_466.SbusStation EQU 30 ;
S.PRJ.Rom_467.SbusStation EQU 31 ;
S.PRJ.Rom_468.SbusStation EQU 32 ;
S.PRJ.Rom_469.SbusStation EQU 33 ;
S.PRJ.Rom_470.SbusStation EQU 34 ;
S.PRJ.Rom_471.SbusStation EQU 35 ;
S.PRJ.Rom_472.SbusStation EQU 36 ;
S.PRJ.Rom_473.SbusStation EQU 37 ;
S.PRJ.Rom_474.SbusStation EQU 38 ;
S.PRJ.Rom_475.SbusStation EQU 39 ;
S.PRJ.Rom_476.SbusStation EQU 40 ;
S.PRJ.Rom_561.SbusStation EQU 10 ;
S.PRJ.Rom_562.SbusStation EQU 11 ;
S.PRJ.Rom_563.SbusStation EQU 12 ;
S.PRJ.Rom_564.SbusStation EQU 13 ;
S.PRJ.Rom_565.SbusStation EQU 14 ;
S.PRJ.Rom_566.SbusStation EQU 15 ;
S.PRJ.Rom_567.SbusStation EQU 16 ;
S.PRJ.Rom_568.SbusStation EQU 17 ;
S.PRJ.Rom_569.SbusStation EQU 18 ;
S.PRJ.Rom_570.SbusStation EQU 19 ;
S.PRJ.Rom_571.SbusStation EQU 20 ;
S.PRJ.Rom_572.SbusStation EQU 21 ;
S.PRJ.Rom_573.SbusStation EQU 22 ;
S.PRJ.Rom_574.SbusStation EQU 23 ;
S.PRJ.Rom_575.SbusStation EQU 24 ;
S.PRJ.Rom_576.SbusStation EQU 25 ;
S.PRJ.Rom_661.SbusStation EQU 26 ;
S.PRJ.Rom_662.SbusStation EQU 27 ;
S.PRJ.Rom_663.SbusStation EQU 28 ;
S.PRJ.Rom_664.SbusStation EQU 29 ;
S.PRJ.Rom_665.SbusStation EQU 30 ;
S.PRJ.Rom_666.SbusStation EQU 31 ;
S.PRJ.Rom_667.SbusStation EQU 32 ;
S.PRJ.Rom_668.SbusStation EQU 33 ;
S.PRJ.Rom_669.SbusStation EQU 34 ;
S.PRJ.Rom_670.SbusStation EQU 35 ;
S.PRJ.Rom_671.SbusStation EQU 36 ;
S.PRJ.Rom_672.SbusStation EQU 37 ;
S.PRJ.Rom_673.SbusStation EQU 38 ;
S.PRJ.Rom_674.SbusStation EQU 39 ;
S.PRJ.Rom_675.SbusStation EQU 40 ;
S.PRJ.Rom_676.SbusStation EQU 41 ;
S.PRJ.FrontEnd_R3_60_EUL_anlegg.IPNode EQU 79 ;
S.PRJ.FrontEnd_R3_60_EUL_anlegg.IPChannel EQU 9 ;
A.MACROS.SBus1 EQU 13 ;[_COMSASM4
A.MACROS.Rx_Stn_01 EQU 11 ;[_COMRXI4Q
A.MACROS.Tx_Stn_01 EQU 12 ;[_COMTXI4Q
A.MACROS.Rx_Stn_02 EQU 36 ;[_COMRXI4Q
A.MACROS.Tx_Stn_02 EQU 37 ;[_COMTXI4Q
A.MACROS.Rx_Stn_03 EQU 33 ;[_COMRXI4Q
A.MACROS.Tx_Stn_03 EQU 34 ;[_COMTXI4Q
A.MACROS.Rx_Stn_04 EQU 30 ;[_COMRXI4Q
A.MACROS.Tx_Stn_04 EQU 31 ;[_COMTXI4Q
A.MACROS.Rx_Stn_05 EQU 27 ;[_COMRXI4Q
A.MACROS.Tx_Stn_05 EQU 28 ;[_COMTXI4Q
A.MACROS.Rx_Stn_06 EQU 24 ;[_COMRXI4Q
A.MACROS.Tx_Stn_06 EQU 25 ;[_COMTXI4Q
A.MACROS.Rx_Stn_07 EQU 21 ;[_COMRXI4Q
A.MACROS.Tx_Stn_07 EQU 22 ;[_COMTXI4Q
A.MACROS.Rx_Stn_08 EQU 18 ;[_COMRXI4Q
A.MACROS.Tx_Stn_08 EQU 19 ;[_COMTXI4Q
A.MACROS.Rx_Stn_09 EQU 15 ;[_COMRXI4Q
A.MACROS.Tx_Stn_09 EQU 16 ;[_COMTXI4Q
A.MACROS.Rx_Stn_10 EQU 377 ;[_COMRXI4Q
A.MACROS.Tx_Stn_10 EQU 378 ;[_COMTXI4Q
A.MACROS.Rx_Stn_11 EQU 374 ;[_COMRXI4Q
A.MACROS.Tx_Stn_11 EQU 375 ;[_COMTXI4Q
A.MACROS.Rx_Stn_12 EQU 371 ;[_COMRXI4Q
A.MACROS.Tx_Stn_12 EQU 372 ;[_COMTXI4Q
A.MACROS.Rx_Stn_13 EQU 368 ;[_COMRXI4Q
A.MACROS.Tx_Stn_13 EQU 369 ;[_COMTXI4Q
A.MACROS.Rx_Stn_14 EQU 365 ;[_COMRXI4Q
A.MACROS.Tx_Stn_14 EQU 366 ;[_COMTXI4Q
A.MACROS.Rx_Stn_15 EQU 362 ;[_COMRXI4Q
A.MACROS.Tx_Stn_15 EQU 363 ;[_COMTXI4Q
A.MACROS.Rx_Stn_16 EQU 359 ;[_COMRXI4Q
A.MACROS.Tx_Stn_16 EQU 360 ;[_COMTXI4Q
A.MACROS.Rx_Stn_17 EQU 356 ;[_COMRXI4Q
A.MACROS.Tx_Stn_17 EQU 357 ;[_COMTXI4Q
A.MACROS.Rx_Stn_18 EQU 353 ;[_COMRXI4Q
A.MACROS.Tx_Stn_18 EQU 354 ;[_COMTXI4Q
A.MACROS.Rx_Stn_19 EQU 350 ;[_COMRXI4Q
A.MACROS.Tx_Stn_19 EQU 351 ;[_COMTXI4Q
A.MACROS.Rx_Stn_20 EQU 347 ;[_COMRXI4Q
A.MACROS.Tx_Stn_20 EQU 348 ;[_COMTXI4Q
A.MACROS.Rx_Stn_21 EQU 344 ;[_COMRXI4Q
A.MACROS.Tx_Stn_21 EQU 345 ;[_COMTXI4Q
A.MACROS.Rx_Stn_22 EQU 341 ;[_COMRXI4Q
A.MACROS.Tx_Stn_22 EQU 342 ;[_COMTXI4Q
A.MACROS.Rx_Stn_23 EQU 338 ;[_COMRXI4Q
A.MACROS.Tx_Stn_23 EQU 339 ;[_COMTXI4Q
A.MACROS.Rx_Stn_24 EQU 335 ;[_COMRXI4Q
A.MACROS.Tx_Stn_24 EQU 336 ;[_COMTXI4Q
A.MACROS.Rx_Stn_25 EQU 332 ;[_COMRXI4Q
A.MACROS.Tx_Stn_25 EQU 333 ;[_COMTXI4Q
A.MACROS.Rx_Stn_26 EQU 329 ;[_COMRXI4Q
A.MACROS.Tx_Stn_26 EQU 330 ;[_COMTXI4Q
A.MACROS.Rx_Stn_27 EQU 326 ;[_COMRXI4Q
A.MACROS.Tx_Stn_27 EQU 327 ;[_COMTXI4Q
A.MACROS.Rx_Stn_28 EQU 323 ;[_COMRXI4Q
A.MACROS.Tx_Stn_28 EQU 324 ;[_COMTXI4Q
A.MACROS.Rx_Stn_29 EQU 320 ;[_COMRXI4Q
A.MACROS.Tx_Stn_29 EQU 321 ;[_COMTXI4Q
A.MACROS.Rx_Stn_30 EQU 317 ;[_COMRXI4Q
A.MACROS.Tx_Stn_30 EQU 318 ;[_COMTXI4Q
A.MACROS.Rx_Stn_31 EQU 218 ;[_COMRXI4Q
A.MACROS.Tx_Stn_31 EQU 219 ;[_COMTXI4Q
A.MACROS.Rx_Stn_32 EQU 215 ;[_COMRXI4Q
A.MACROS.Tx_Stn_32 EQU 216 ;[_COMTXI4Q
A.MACROS.Rx_Stn_33 EQU 212 ;[_COMRXI4Q
A.MACROS.Tx_Stn_33 EQU 213 ;[_COMTXI4Q
A.MACROS.Rx_Stn_34 EQU 209 ;[_COMRXI4Q
A.MACROS.Tx_Stn_34 EQU 210 ;[_COMTXI4Q
A.MACROS.Rx_Stn_35 EQU 206 ;[_COMRXI4Q
A.MACROS.Tx_Stn_35 EQU 207 ;[_COMTXI4Q
A.MACROS.Rx_Stn_36 EQU 203 ;[_COMRXI4Q
A.MACROS.Tx_Stn_36 EQU 204 ;[_COMTXI4Q
A.MACROS.Rx_Stn_37 EQU 200 ;[_COMRXI4Q
A.MACROS.Tx_Stn_37 EQU 201 ;[_COMTXI4Q
A.MACROS.Rx_Stn_38 EQU 197 ;[_COMRXI4Q
A.MACROS.Tx_Stn_38 EQU 198 ;[_COMTXI4Q
A.MACROS.Rx_Stn_39 EQU 194 ;[_COMRXI4Q
A.MACROS.Tx_Stn_39 EQU 195 ;[_COMTXI4Q
A.MACROS.Rx_Stn_40 EQU 221 ;[_COMRXI4Q
A.MACROS.Tx_Stn_40 EQU 222 ;[_COMTXI4Q
A.MACROS.Rx_Stn_41 EQU 284 ;[_COMRXI4Q
A.MACROS.Tx_Stn_41 EQU 285 ;[_COMTXI4Q
A.MACROS.SBus2 EQU 103 ;[_COMSASM4
A.MACROS.SBus3 EQU 713 ;[_COMSASM4
A.MACROS.Rx_Stn_1 EQU 617 ;[_COMRXI4Q
A.MACROS.Tx_Stn_1 EQU 618 ;[_COMTXI4Q
A.MACROS.Rx_Stn_2 EQU 614 ;[_COMRXI4Q
A.MACROS.Tx_Stn_2 EQU 615 ;[_COMTXI4Q
A.MACROS.Rx_Stn_3 EQU 611 ;[_COMRXI4Q
A.MACROS.Tx_Stn_3 EQU 612 ;[_COMTXI4Q
A.MACROS.Rx_Stn_4 EQU 608 ;[_COMRXI4Q
A.MACROS.Tx_Stn_4 EQU 609 ;[_COMTXI4Q
A.MACROS.Rx_Stn_5 EQU 605 ;[_COMRXI4Q
A.MACROS.Tx_Stn_5 EQU 606 ;[_COMTXI4Q
A.MACROS.Rx_Stn_6 EQU 602 ;[_COMRXI4Q
A.MACROS.Tx_Stn_6 EQU 603 ;[_COMTXI4Q
A.MACROS.Rx_Stn_7 EQU 599 ;[_COMRXI4Q
A.MACROS.Tx_Stn_7 EQU 600 ;[_COMTXI4Q
A.MACROS.Rx_Stn_8 EQU 596 ;[_COMRXI4Q
A.MACROS.Tx_Stn_8 EQU 597 ;[_COMTXI4Q
A.MACROS.Rx_Stn_9 EQU 593 ;[_COMRXI4Q
A.MACROS.Tx_Stn_9 EQU 594 ;[_COMTXI4Q
A.MACROS.SBus4 EQU 837 ;[_COMSASM4
s.com.SBus1.regdiag EQU R  ;Diagnostic register
s.com.SBus1.flagdiag EQU F [8] ;Diagnostic flags
S.com.SBus1.station EQU R [3] ;Slave station address
s.com.SBus1.channel EQU 100 ;Channel number
s.com.SBus1.errs EQU F  ;SASI error
s.com.SBus1.rbsy EQU F [8] ;Receiver busy
s.com.SBus1.rful EQU F  ;Receiver buffer full
s.com.SBus1.rdia EQU F  ;Receiver diagnostic
s.com.SBus1.tbsy EQU F  ;Transmitter busy
s.com.SBus1.tful EQU F  ;Transmitter buffer full
s.com.SBus1.tdia EQU F  ;Transmitter diagnostic
s.com.SBus1.xbsy EQU F  ;Text transmitter busy
s.com.SBus1.nexe EQU F  ;Not executed
s.com.SBus1.media EQU R  ;Actual media type
s.com.SBus1.address EQU R  ;Actual media address
s.com.SBus1.token EQU F  ;Fbox token
s.com.SBus2.regdiag EQU R  ;Diagnostic register
s.com.SBus2.flagdiag EQU F [8] ;Diagnostic flags
S.com.SBus2.station EQU R [3] ;Slave station address
s.com.SBus2.channel EQU 101 ;Channel number
s.com.SBus2.errs EQU F  ;SASI error
s.com.SBus2.rbsy EQU F [8] ;Receiver busy
s.com.SBus2.rful EQU F  ;Receiver buffer full
s.com.SBus2.rdia EQU F  ;Receiver diagnostic
s.com.SBus2.tbsy EQU F  ;Transmitter busy
s.com.SBus2.tful EQU F  ;Transmitter buffer full
s.com.SBus2.tdia EQU F  ;Transmitter diagnostic
s.com.SBus2.xbsy EQU F  ;Text transmitter busy
s.com.SBus2.nexe EQU F  ;Not executed
s.com.SBus2.media EQU R  ;Actual media type
s.com.SBus2.address EQU R  ;Actual media address
s.com.SBus2.token EQU F  ;Fbox token
s.com.SBus3.regdiag EQU R  ;Diagnostic register
s.com.SBus3.flagdiag EQU F [8] ;Diagnostic flags
S.com.SBus3.station EQU R [3] ;Slave station address
s.com.SBus3.channel EQU 110 ;Channel number
s.com.SBus3.errs EQU F  ;SASI error
s.com.SBus3.rbsy EQU F [8] ;Receiver busy
s.com.SBus3.rful EQU F  ;Receiver buffer full
s.com.SBus3.rdia EQU F  ;Receiver diagnostic
s.com.SBus3.tbsy EQU F  ;Transmitter busy
s.com.SBus3.tful EQU F  ;Transmitter buffer full
s.com.SBus3.tdia EQU F  ;Transmitter diagnostic
s.com.SBus3.xbsy EQU F  ;Text transmitter busy
s.com.SBus3.nexe EQU F  ;Not executed
s.com.SBus3.media EQU R  ;Actual media type
s.com.SBus3.address EQU R  ;Actual media address
s.com.SBus3.token EQU F  ;Fbox token
s.com.SBus4.regdiag EQU R  ;Diagnostic register
s.com.SBus4.flagdiag EQU F [8] ;Diagnostic flags
S.com.SBus4.station EQU R [3] ;Slave station address
s.com.SBus4.channel EQU 111 ;Channel number
s.com.SBus4.errs EQU F  ;SASI error
s.com.SBus4.rbsy EQU F [8] ;Receiver busy
s.com.SBus4.rful EQU F  ;Receiver buffer full
s.com.SBus4.rdia EQU F  ;Receiver diagnostic
s.com.SBus4.tbsy EQU F  ;Transmitter busy
s.com.SBus4.tful EQU F  ;Transmitter buffer full
s.com.SBus4.tdia EQU F  ;Transmitter diagnostic
s.com.SBus4.xbsy EQU F  ;Text transmitter busy
s.com.SBus4.nexe EQU F  ;Not executed
s.com.SBus4.media EQU R  ;Actual media type
s.com.SBus4.address EQU R  ;Actual media address
s.com.SBus4.token EQU F  ;Fbox token
