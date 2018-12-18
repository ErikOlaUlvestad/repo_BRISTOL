;Saia PG5 Build File
;Created by Project Manager

;Creates this PCD program
/PCD="FrontEnd_R3_60_EUL.pcd"

;Switches
/DEFTC=160
/SPM /L /NOTIT /NX /WOSTV /WOSNA /WOSN /LPERP=60 
/PCDTYPE=35
/ISNT /EXTCOBPBFB /RF64K 

;Library directories
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Libs\App"
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Libs\FB"
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Libs\SF"
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Libs\Std"
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Libs\Usr"
/I"C:\Users\eul\SBC\PG5 V2.3.1xx\Templates\UserLib"


;Global include files
/$I"_FrontEnd_R3_60_EUL.inc"

;Files to assemble and link
"_FrontEnd_R3_60_EUL.src"
"FrontEnd.fbd"
"textTags_BRISTOL.src"
"Mapping.src"

;TCP/IP address file (DBX 5)
_TCPIPDBX.src

;end
