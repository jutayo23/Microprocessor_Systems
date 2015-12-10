                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (May 11 2013) (MINGW32)
                              4 ; This file was generated Thu Dec 10 18:52:10 2015
                              5 ;--------------------------------------------------------
                              6 	.module part4a
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _P7_7
                             13 	.globl _P7_6
                             14 	.globl _P7_5
                             15 	.globl _P7_4
                             16 	.globl _P7_3
                             17 	.globl _P7_2
                             18 	.globl _P7_1
                             19 	.globl _P7_0
                             20 	.globl _SPIF
                             21 	.globl _WCOL
                             22 	.globl _MODF
                             23 	.globl _RXOVRN
                             24 	.globl _NSSMD1
                             25 	.globl _NSSMD0
                             26 	.globl _TXBMT
                             27 	.globl _SPIEN
                             28 	.globl _P6_7
                             29 	.globl _P6_6
                             30 	.globl _P6_5
                             31 	.globl _P6_4
                             32 	.globl _P6_3
                             33 	.globl _P6_2
                             34 	.globl _P6_1
                             35 	.globl _P6_0
                             36 	.globl _AD2EN
                             37 	.globl _AD2TM
                             38 	.globl _AD2INT
                             39 	.globl _AD2BUSY
                             40 	.globl _AD2CM2
                             41 	.globl _AD2CM1
                             42 	.globl _AD2CM0
                             43 	.globl _AD2WINT
                             44 	.globl _AD0EN
                             45 	.globl _AD0TM
                             46 	.globl _AD0INT
                             47 	.globl _AD0BUSY
                             48 	.globl _AD0CM1
                             49 	.globl _AD0CM0
                             50 	.globl _AD0WINT
                             51 	.globl _AD0LJST
                             52 	.globl _P5_7
                             53 	.globl _P5_6
                             54 	.globl _P5_5
                             55 	.globl _P5_4
                             56 	.globl _P5_3
                             57 	.globl _P5_2
                             58 	.globl _P5_1
                             59 	.globl _P5_0
                             60 	.globl _CF
                             61 	.globl _CR
                             62 	.globl _CCF5
                             63 	.globl _CCF4
                             64 	.globl _CCF3
                             65 	.globl _CCF2
                             66 	.globl _CCF1
                             67 	.globl _CCF0
                             68 	.globl _CY
                             69 	.globl _AC
                             70 	.globl _F0
                             71 	.globl _RS1
                             72 	.globl _RS0
                             73 	.globl _OV
                             74 	.globl _F1
                             75 	.globl _P
                             76 	.globl _P4_7
                             77 	.globl _P4_6
                             78 	.globl _P4_5
                             79 	.globl _P4_4
                             80 	.globl _P4_3
                             81 	.globl _P4_2
                             82 	.globl _P4_1
                             83 	.globl _P4_0
                             84 	.globl _TF4
                             85 	.globl _EXF4
                             86 	.globl _EXEN4
                             87 	.globl _TR4
                             88 	.globl _CT4
                             89 	.globl _CPRL4
                             90 	.globl _TF3
                             91 	.globl _EXF3
                             92 	.globl _EXEN3
                             93 	.globl _TR3
                             94 	.globl _CT3
                             95 	.globl _CPRL3
                             96 	.globl _TF2
                             97 	.globl _EXF2
                             98 	.globl _EXEN2
                             99 	.globl _TR2
                            100 	.globl _CT2
                            101 	.globl _CPRL2
                            102 	.globl _MAC0HO
                            103 	.globl _MAC0Z
                            104 	.globl _MAC0SO
                            105 	.globl _MAC0N
                            106 	.globl _BUSY
                            107 	.globl _ENSMB
                            108 	.globl _STA
                            109 	.globl _STO
                            110 	.globl _SI
                            111 	.globl _AA
                            112 	.globl _SMBFTE
                            113 	.globl _SMBTOE
                            114 	.globl _PT2
                            115 	.globl _PS
                            116 	.globl _PS0
                            117 	.globl _PT1
                            118 	.globl _PX1
                            119 	.globl _PT0
                            120 	.globl _PX0
                            121 	.globl _P3_7
                            122 	.globl _P3_6
                            123 	.globl _P3_5
                            124 	.globl _P3_4
                            125 	.globl _P3_3
                            126 	.globl _P3_2
                            127 	.globl _P3_1
                            128 	.globl _P3_0
                            129 	.globl _EA
                            130 	.globl _ET2
                            131 	.globl _ES
                            132 	.globl _ES0
                            133 	.globl _ET1
                            134 	.globl _EX1
                            135 	.globl _ET0
                            136 	.globl _EX0
                            137 	.globl _P2_7
                            138 	.globl _P2_6
                            139 	.globl _P2_5
                            140 	.globl _P2_4
                            141 	.globl _P2_3
                            142 	.globl _P2_2
                            143 	.globl _P2_1
                            144 	.globl _P2_0
                            145 	.globl _S1MODE
                            146 	.globl _MCE1
                            147 	.globl _REN1
                            148 	.globl _TB81
                            149 	.globl _RB81
                            150 	.globl _TI1
                            151 	.globl _RI1
                            152 	.globl _SM00
                            153 	.globl _SM10
                            154 	.globl _SM20
                            155 	.globl _REN
                            156 	.globl _REN0
                            157 	.globl _TB80
                            158 	.globl _RB80
                            159 	.globl _TI
                            160 	.globl _TI0
                            161 	.globl _RI
                            162 	.globl _RI0
                            163 	.globl _P1_7
                            164 	.globl _P1_6
                            165 	.globl _P1_5
                            166 	.globl _P1_4
                            167 	.globl _P1_3
                            168 	.globl _P1_2
                            169 	.globl _P1_1
                            170 	.globl _P1_0
                            171 	.globl _FLHBUSY
                            172 	.globl _CP1EN
                            173 	.globl _CP1OUT
                            174 	.globl _CP1RIF
                            175 	.globl _CP1FIF
                            176 	.globl _CP1HYP1
                            177 	.globl _CP1HYP0
                            178 	.globl _CP1HYN1
                            179 	.globl _CP1HYN0
                            180 	.globl _CP0EN
                            181 	.globl _CP0OUT
                            182 	.globl _CP0RIF
                            183 	.globl _CP0FIF
                            184 	.globl _CP0HYP1
                            185 	.globl _CP0HYP0
                            186 	.globl _CP0HYN1
                            187 	.globl _CP0HYN0
                            188 	.globl _TF1
                            189 	.globl _TR1
                            190 	.globl _TF0
                            191 	.globl _TR0
                            192 	.globl _IE1
                            193 	.globl _IT1
                            194 	.globl _IE0
                            195 	.globl _IT0
                            196 	.globl _P0_7
                            197 	.globl _P0_6
                            198 	.globl _P0_5
                            199 	.globl _P0_4
                            200 	.globl _P0_3
                            201 	.globl _P0_2
                            202 	.globl _P0_1
                            203 	.globl _P0_0
                            204 	.globl _MAC0RND
                            205 	.globl _MAC0ACC
                            206 	.globl _MAC0A
                            207 	.globl _RCAP4
                            208 	.globl _TMR4
                            209 	.globl _DAC1
                            210 	.globl _RCAP3
                            211 	.globl _TMR3
                            212 	.globl _PCA0CP5
                            213 	.globl _PCA0CP4
                            214 	.globl _PCA0CP3
                            215 	.globl _PCA0CP2
                            216 	.globl _PCA0CP1
                            217 	.globl _PCA0CP0
                            218 	.globl _PCA0
                            219 	.globl _DAC0
                            220 	.globl _ADC0LT
                            221 	.globl _ADC0GT
                            222 	.globl _ADC0
                            223 	.globl _RCAP2
                            224 	.globl _TMR2
                            225 	.globl _TMR1
                            226 	.globl _TMR0
                            227 	.globl _P7
                            228 	.globl _P6
                            229 	.globl _XBR2
                            230 	.globl _XBR1
                            231 	.globl _XBR0
                            232 	.globl _P5
                            233 	.globl _P4
                            234 	.globl _FLACL
                            235 	.globl _P1MDIN
                            236 	.globl _P3MDOUT
                            237 	.globl _P2MDOUT
                            238 	.globl _P1MDOUT
                            239 	.globl _P0MDOUT
                            240 	.globl _CCH0LC
                            241 	.globl _CCH0TN
                            242 	.globl _CCH0CN
                            243 	.globl _P7MDOUT
                            244 	.globl _P6MDOUT
                            245 	.globl _P5MDOUT
                            246 	.globl _P4MDOUT
                            247 	.globl _CCH0MA
                            248 	.globl _CLKSEL
                            249 	.globl _SFRPGCN
                            250 	.globl _PLL0FLT
                            251 	.globl _PLL0MUL
                            252 	.globl _PLL0DIV
                            253 	.globl _OSCXCN
                            254 	.globl _OSCICL
                            255 	.globl _OSCICN
                            256 	.globl _PLL0CN
                            257 	.globl _FLSTAT
                            258 	.globl _MAC0RNDH
                            259 	.globl _MAC0RNDL
                            260 	.globl _MAC0CF
                            261 	.globl _MAC0AH
                            262 	.globl _MAC0AL
                            263 	.globl _MAC0STA
                            264 	.globl _MAC0OVR
                            265 	.globl _MAC0ACC3
                            266 	.globl _MAC0ACC2
                            267 	.globl _MAC0ACC1
                            268 	.globl _MAC0ACC0
                            269 	.globl _MAC0BH
                            270 	.globl _MAC0BL
                            271 	.globl _ADC2CN
                            272 	.globl _TMR4H
                            273 	.globl _TMR4L
                            274 	.globl _RCAP4H
                            275 	.globl _RCAP4L
                            276 	.globl _TMR4CF
                            277 	.globl _TMR4CN
                            278 	.globl _ADC2LT
                            279 	.globl _ADC2GT
                            280 	.globl _ADC2
                            281 	.globl _ADC2CF
                            282 	.globl _AMX2SL
                            283 	.globl _AMX2CF
                            284 	.globl _CPT1MD
                            285 	.globl _CPT1CN
                            286 	.globl _DAC1CN
                            287 	.globl _DAC1H
                            288 	.globl _DAC1L
                            289 	.globl _TMR3H
                            290 	.globl _TMR3L
                            291 	.globl _RCAP3H
                            292 	.globl _RCAP3L
                            293 	.globl _TMR3CF
                            294 	.globl _TMR3CN
                            295 	.globl _SBUF1
                            296 	.globl _SCON1
                            297 	.globl _CPT0MD
                            298 	.globl _CPT0CN
                            299 	.globl _PCA0CPH1
                            300 	.globl _PCA0CPL1
                            301 	.globl _PCA0CPH0
                            302 	.globl _PCA0CPL0
                            303 	.globl _PCA0H
                            304 	.globl _PCA0L
                            305 	.globl _SPI0CN
                            306 	.globl _RSTSRC
                            307 	.globl _PCA0CPH4
                            308 	.globl _PCA0CPL4
                            309 	.globl _PCA0CPH3
                            310 	.globl _PCA0CPL3
                            311 	.globl _PCA0CPH2
                            312 	.globl _PCA0CPL2
                            313 	.globl _ADC0CN
                            314 	.globl _PCA0CPH5
                            315 	.globl _PCA0CPL5
                            316 	.globl _PCA0CPM5
                            317 	.globl _PCA0CPM4
                            318 	.globl _PCA0CPM3
                            319 	.globl _PCA0CPM2
                            320 	.globl _PCA0CPM1
                            321 	.globl _PCA0CPM0
                            322 	.globl _PCA0MD
                            323 	.globl _PCA0CN
                            324 	.globl _DAC0CN
                            325 	.globl _DAC0H
                            326 	.globl _DAC0L
                            327 	.globl _REF0CN
                            328 	.globl _SMB0CR
                            329 	.globl _TH2
                            330 	.globl _TMR2H
                            331 	.globl _TL2
                            332 	.globl _TMR2L
                            333 	.globl _RCAP2H
                            334 	.globl _RCAP2L
                            335 	.globl _TMR2CF
                            336 	.globl _TMR2CN
                            337 	.globl _ADC0LTH
                            338 	.globl _ADC0LTL
                            339 	.globl _ADC0GTH
                            340 	.globl _ADC0GTL
                            341 	.globl _SMB0ADR
                            342 	.globl _SMB0DAT
                            343 	.globl _SMB0STA
                            344 	.globl _SMB0CN
                            345 	.globl _ADC0H
                            346 	.globl _ADC0L
                            347 	.globl _ADC0CF
                            348 	.globl _AMX0SL
                            349 	.globl _AMX0CF
                            350 	.globl _SADEN0
                            351 	.globl _FLSCL
                            352 	.globl _SADDR0
                            353 	.globl _EMI0CF
                            354 	.globl __XPAGE
                            355 	.globl _EMI0CN
                            356 	.globl _EMI0TC
                            357 	.globl _SPI0CKR
                            358 	.globl _SPI0DAT
                            359 	.globl _SPI0CFG
                            360 	.globl _SBUF
                            361 	.globl _SBUF0
                            362 	.globl _SCON
                            363 	.globl _SCON0
                            364 	.globl _SSTA0
                            365 	.globl _PSCTL
                            366 	.globl _CKCON
                            367 	.globl _TH1
                            368 	.globl _TH0
                            369 	.globl _TL1
                            370 	.globl _TL0
                            371 	.globl _TMOD
                            372 	.globl _TCON
                            373 	.globl _WDTCN
                            374 	.globl _EIP2
                            375 	.globl _EIP1
                            376 	.globl _B
                            377 	.globl _EIE2
                            378 	.globl _EIE1
                            379 	.globl _ACC
                            380 	.globl _PSW
                            381 	.globl _IP
                            382 	.globl _PSBANK
                            383 	.globl _P3
                            384 	.globl _IE
                            385 	.globl _P2
                            386 	.globl _P1
                            387 	.globl _PCON
                            388 	.globl _SFRLAST
                            389 	.globl _SFRNEXT
                            390 	.globl _SFRPAGE
                            391 	.globl _DPH
                            392 	.globl _DPL
                            393 	.globl _SP
                            394 	.globl _P0
                            395 	.globl _dig_val
                            396 	.globl _start_conversion
                            397 	.globl _putchar
                            398 	.globl _getchar
                            399 	.globl _main
                            400 	.globl _SYSCLK_INIT
                            401 	.globl _PORT_INIT
                            402 	.globl _UART0_INIT
                            403 	.globl _ADC_INIT
                            404 	.globl _DAC_INIT
                            405 	.globl _INTERRUPT_INIT
                            406 	.globl _TIMER_INIT
                            407 	.globl _MAC_INIT
                            408 ;--------------------------------------------------------
                            409 ; special function registers
                            410 ;--------------------------------------------------------
                            411 	.area RSEG    (ABS,DATA)
   0000                     412 	.org 0x0000
                     0080   413 G$P0$0$0 == 0x0080
                     0080   414 _P0	=	0x0080
                     0081   415 G$SP$0$0 == 0x0081
                     0081   416 _SP	=	0x0081
                     0082   417 G$DPL$0$0 == 0x0082
                     0082   418 _DPL	=	0x0082
                     0083   419 G$DPH$0$0 == 0x0083
                     0083   420 _DPH	=	0x0083
                     0084   421 G$SFRPAGE$0$0 == 0x0084
                     0084   422 _SFRPAGE	=	0x0084
                     0085   423 G$SFRNEXT$0$0 == 0x0085
                     0085   424 _SFRNEXT	=	0x0085
                     0086   425 G$SFRLAST$0$0 == 0x0086
                     0086   426 _SFRLAST	=	0x0086
                     0087   427 G$PCON$0$0 == 0x0087
                     0087   428 _PCON	=	0x0087
                     0090   429 G$P1$0$0 == 0x0090
                     0090   430 _P1	=	0x0090
                     00A0   431 G$P2$0$0 == 0x00a0
                     00A0   432 _P2	=	0x00a0
                     00A8   433 G$IE$0$0 == 0x00a8
                     00A8   434 _IE	=	0x00a8
                     00B0   435 G$P3$0$0 == 0x00b0
                     00B0   436 _P3	=	0x00b0
                     00B1   437 G$PSBANK$0$0 == 0x00b1
                     00B1   438 _PSBANK	=	0x00b1
                     00B8   439 G$IP$0$0 == 0x00b8
                     00B8   440 _IP	=	0x00b8
                     00D0   441 G$PSW$0$0 == 0x00d0
                     00D0   442 _PSW	=	0x00d0
                     00E0   443 G$ACC$0$0 == 0x00e0
                     00E0   444 _ACC	=	0x00e0
                     00E6   445 G$EIE1$0$0 == 0x00e6
                     00E6   446 _EIE1	=	0x00e6
                     00E7   447 G$EIE2$0$0 == 0x00e7
                     00E7   448 _EIE2	=	0x00e7
                     00F0   449 G$B$0$0 == 0x00f0
                     00F0   450 _B	=	0x00f0
                     00F6   451 G$EIP1$0$0 == 0x00f6
                     00F6   452 _EIP1	=	0x00f6
                     00F7   453 G$EIP2$0$0 == 0x00f7
                     00F7   454 _EIP2	=	0x00f7
                     00FF   455 G$WDTCN$0$0 == 0x00ff
                     00FF   456 _WDTCN	=	0x00ff
                     0088   457 G$TCON$0$0 == 0x0088
                     0088   458 _TCON	=	0x0088
                     0089   459 G$TMOD$0$0 == 0x0089
                     0089   460 _TMOD	=	0x0089
                     008A   461 G$TL0$0$0 == 0x008a
                     008A   462 _TL0	=	0x008a
                     008B   463 G$TL1$0$0 == 0x008b
                     008B   464 _TL1	=	0x008b
                     008C   465 G$TH0$0$0 == 0x008c
                     008C   466 _TH0	=	0x008c
                     008D   467 G$TH1$0$0 == 0x008d
                     008D   468 _TH1	=	0x008d
                     008E   469 G$CKCON$0$0 == 0x008e
                     008E   470 _CKCON	=	0x008e
                     008F   471 G$PSCTL$0$0 == 0x008f
                     008F   472 _PSCTL	=	0x008f
                     0091   473 G$SSTA0$0$0 == 0x0091
                     0091   474 _SSTA0	=	0x0091
                     0098   475 G$SCON0$0$0 == 0x0098
                     0098   476 _SCON0	=	0x0098
                     0098   477 G$SCON$0$0 == 0x0098
                     0098   478 _SCON	=	0x0098
                     0099   479 G$SBUF0$0$0 == 0x0099
                     0099   480 _SBUF0	=	0x0099
                     0099   481 G$SBUF$0$0 == 0x0099
                     0099   482 _SBUF	=	0x0099
                     009A   483 G$SPI0CFG$0$0 == 0x009a
                     009A   484 _SPI0CFG	=	0x009a
                     009B   485 G$SPI0DAT$0$0 == 0x009b
                     009B   486 _SPI0DAT	=	0x009b
                     009D   487 G$SPI0CKR$0$0 == 0x009d
                     009D   488 _SPI0CKR	=	0x009d
                     00A1   489 G$EMI0TC$0$0 == 0x00a1
                     00A1   490 _EMI0TC	=	0x00a1
                     00A2   491 G$EMI0CN$0$0 == 0x00a2
                     00A2   492 _EMI0CN	=	0x00a2
                     00A2   493 G$_XPAGE$0$0 == 0x00a2
                     00A2   494 __XPAGE	=	0x00a2
                     00A3   495 G$EMI0CF$0$0 == 0x00a3
                     00A3   496 _EMI0CF	=	0x00a3
                     00A9   497 G$SADDR0$0$0 == 0x00a9
                     00A9   498 _SADDR0	=	0x00a9
                     00B7   499 G$FLSCL$0$0 == 0x00b7
                     00B7   500 _FLSCL	=	0x00b7
                     00B9   501 G$SADEN0$0$0 == 0x00b9
                     00B9   502 _SADEN0	=	0x00b9
                     00BA   503 G$AMX0CF$0$0 == 0x00ba
                     00BA   504 _AMX0CF	=	0x00ba
                     00BB   505 G$AMX0SL$0$0 == 0x00bb
                     00BB   506 _AMX0SL	=	0x00bb
                     00BC   507 G$ADC0CF$0$0 == 0x00bc
                     00BC   508 _ADC0CF	=	0x00bc
                     00BE   509 G$ADC0L$0$0 == 0x00be
                     00BE   510 _ADC0L	=	0x00be
                     00BF   511 G$ADC0H$0$0 == 0x00bf
                     00BF   512 _ADC0H	=	0x00bf
                     00C0   513 G$SMB0CN$0$0 == 0x00c0
                     00C0   514 _SMB0CN	=	0x00c0
                     00C1   515 G$SMB0STA$0$0 == 0x00c1
                     00C1   516 _SMB0STA	=	0x00c1
                     00C2   517 G$SMB0DAT$0$0 == 0x00c2
                     00C2   518 _SMB0DAT	=	0x00c2
                     00C3   519 G$SMB0ADR$0$0 == 0x00c3
                     00C3   520 _SMB0ADR	=	0x00c3
                     00C4   521 G$ADC0GTL$0$0 == 0x00c4
                     00C4   522 _ADC0GTL	=	0x00c4
                     00C5   523 G$ADC0GTH$0$0 == 0x00c5
                     00C5   524 _ADC0GTH	=	0x00c5
                     00C6   525 G$ADC0LTL$0$0 == 0x00c6
                     00C6   526 _ADC0LTL	=	0x00c6
                     00C7   527 G$ADC0LTH$0$0 == 0x00c7
                     00C7   528 _ADC0LTH	=	0x00c7
                     00C8   529 G$TMR2CN$0$0 == 0x00c8
                     00C8   530 _TMR2CN	=	0x00c8
                     00C9   531 G$TMR2CF$0$0 == 0x00c9
                     00C9   532 _TMR2CF	=	0x00c9
                     00CA   533 G$RCAP2L$0$0 == 0x00ca
                     00CA   534 _RCAP2L	=	0x00ca
                     00CB   535 G$RCAP2H$0$0 == 0x00cb
                     00CB   536 _RCAP2H	=	0x00cb
                     00CC   537 G$TMR2L$0$0 == 0x00cc
                     00CC   538 _TMR2L	=	0x00cc
                     00CC   539 G$TL2$0$0 == 0x00cc
                     00CC   540 _TL2	=	0x00cc
                     00CD   541 G$TMR2H$0$0 == 0x00cd
                     00CD   542 _TMR2H	=	0x00cd
                     00CD   543 G$TH2$0$0 == 0x00cd
                     00CD   544 _TH2	=	0x00cd
                     00CF   545 G$SMB0CR$0$0 == 0x00cf
                     00CF   546 _SMB0CR	=	0x00cf
                     00D1   547 G$REF0CN$0$0 == 0x00d1
                     00D1   548 _REF0CN	=	0x00d1
                     00D2   549 G$DAC0L$0$0 == 0x00d2
                     00D2   550 _DAC0L	=	0x00d2
                     00D3   551 G$DAC0H$0$0 == 0x00d3
                     00D3   552 _DAC0H	=	0x00d3
                     00D4   553 G$DAC0CN$0$0 == 0x00d4
                     00D4   554 _DAC0CN	=	0x00d4
                     00D8   555 G$PCA0CN$0$0 == 0x00d8
                     00D8   556 _PCA0CN	=	0x00d8
                     00D9   557 G$PCA0MD$0$0 == 0x00d9
                     00D9   558 _PCA0MD	=	0x00d9
                     00DA   559 G$PCA0CPM0$0$0 == 0x00da
                     00DA   560 _PCA0CPM0	=	0x00da
                     00DB   561 G$PCA0CPM1$0$0 == 0x00db
                     00DB   562 _PCA0CPM1	=	0x00db
                     00DC   563 G$PCA0CPM2$0$0 == 0x00dc
                     00DC   564 _PCA0CPM2	=	0x00dc
                     00DD   565 G$PCA0CPM3$0$0 == 0x00dd
                     00DD   566 _PCA0CPM3	=	0x00dd
                     00DE   567 G$PCA0CPM4$0$0 == 0x00de
                     00DE   568 _PCA0CPM4	=	0x00de
                     00DF   569 G$PCA0CPM5$0$0 == 0x00df
                     00DF   570 _PCA0CPM5	=	0x00df
                     00E1   571 G$PCA0CPL5$0$0 == 0x00e1
                     00E1   572 _PCA0CPL5	=	0x00e1
                     00E2   573 G$PCA0CPH5$0$0 == 0x00e2
                     00E2   574 _PCA0CPH5	=	0x00e2
                     00E8   575 G$ADC0CN$0$0 == 0x00e8
                     00E8   576 _ADC0CN	=	0x00e8
                     00E9   577 G$PCA0CPL2$0$0 == 0x00e9
                     00E9   578 _PCA0CPL2	=	0x00e9
                     00EA   579 G$PCA0CPH2$0$0 == 0x00ea
                     00EA   580 _PCA0CPH2	=	0x00ea
                     00EB   581 G$PCA0CPL3$0$0 == 0x00eb
                     00EB   582 _PCA0CPL3	=	0x00eb
                     00EC   583 G$PCA0CPH3$0$0 == 0x00ec
                     00EC   584 _PCA0CPH3	=	0x00ec
                     00ED   585 G$PCA0CPL4$0$0 == 0x00ed
                     00ED   586 _PCA0CPL4	=	0x00ed
                     00EE   587 G$PCA0CPH4$0$0 == 0x00ee
                     00EE   588 _PCA0CPH4	=	0x00ee
                     00EF   589 G$RSTSRC$0$0 == 0x00ef
                     00EF   590 _RSTSRC	=	0x00ef
                     00F8   591 G$SPI0CN$0$0 == 0x00f8
                     00F8   592 _SPI0CN	=	0x00f8
                     00F9   593 G$PCA0L$0$0 == 0x00f9
                     00F9   594 _PCA0L	=	0x00f9
                     00FA   595 G$PCA0H$0$0 == 0x00fa
                     00FA   596 _PCA0H	=	0x00fa
                     00FB   597 G$PCA0CPL0$0$0 == 0x00fb
                     00FB   598 _PCA0CPL0	=	0x00fb
                     00FC   599 G$PCA0CPH0$0$0 == 0x00fc
                     00FC   600 _PCA0CPH0	=	0x00fc
                     00FD   601 G$PCA0CPL1$0$0 == 0x00fd
                     00FD   602 _PCA0CPL1	=	0x00fd
                     00FE   603 G$PCA0CPH1$0$0 == 0x00fe
                     00FE   604 _PCA0CPH1	=	0x00fe
                     0088   605 G$CPT0CN$0$0 == 0x0088
                     0088   606 _CPT0CN	=	0x0088
                     0089   607 G$CPT0MD$0$0 == 0x0089
                     0089   608 _CPT0MD	=	0x0089
                     0098   609 G$SCON1$0$0 == 0x0098
                     0098   610 _SCON1	=	0x0098
                     0099   611 G$SBUF1$0$0 == 0x0099
                     0099   612 _SBUF1	=	0x0099
                     00C8   613 G$TMR3CN$0$0 == 0x00c8
                     00C8   614 _TMR3CN	=	0x00c8
                     00C9   615 G$TMR3CF$0$0 == 0x00c9
                     00C9   616 _TMR3CF	=	0x00c9
                     00CA   617 G$RCAP3L$0$0 == 0x00ca
                     00CA   618 _RCAP3L	=	0x00ca
                     00CB   619 G$RCAP3H$0$0 == 0x00cb
                     00CB   620 _RCAP3H	=	0x00cb
                     00CC   621 G$TMR3L$0$0 == 0x00cc
                     00CC   622 _TMR3L	=	0x00cc
                     00CD   623 G$TMR3H$0$0 == 0x00cd
                     00CD   624 _TMR3H	=	0x00cd
                     00D2   625 G$DAC1L$0$0 == 0x00d2
                     00D2   626 _DAC1L	=	0x00d2
                     00D3   627 G$DAC1H$0$0 == 0x00d3
                     00D3   628 _DAC1H	=	0x00d3
                     00D4   629 G$DAC1CN$0$0 == 0x00d4
                     00D4   630 _DAC1CN	=	0x00d4
                     0088   631 G$CPT1CN$0$0 == 0x0088
                     0088   632 _CPT1CN	=	0x0088
                     0089   633 G$CPT1MD$0$0 == 0x0089
                     0089   634 _CPT1MD	=	0x0089
                     00BA   635 G$AMX2CF$0$0 == 0x00ba
                     00BA   636 _AMX2CF	=	0x00ba
                     00BB   637 G$AMX2SL$0$0 == 0x00bb
                     00BB   638 _AMX2SL	=	0x00bb
                     00BC   639 G$ADC2CF$0$0 == 0x00bc
                     00BC   640 _ADC2CF	=	0x00bc
                     00BE   641 G$ADC2$0$0 == 0x00be
                     00BE   642 _ADC2	=	0x00be
                     00C4   643 G$ADC2GT$0$0 == 0x00c4
                     00C4   644 _ADC2GT	=	0x00c4
                     00C6   645 G$ADC2LT$0$0 == 0x00c6
                     00C6   646 _ADC2LT	=	0x00c6
                     00C8   647 G$TMR4CN$0$0 == 0x00c8
                     00C8   648 _TMR4CN	=	0x00c8
                     00C9   649 G$TMR4CF$0$0 == 0x00c9
                     00C9   650 _TMR4CF	=	0x00c9
                     00CA   651 G$RCAP4L$0$0 == 0x00ca
                     00CA   652 _RCAP4L	=	0x00ca
                     00CB   653 G$RCAP4H$0$0 == 0x00cb
                     00CB   654 _RCAP4H	=	0x00cb
                     00CC   655 G$TMR4L$0$0 == 0x00cc
                     00CC   656 _TMR4L	=	0x00cc
                     00CD   657 G$TMR4H$0$0 == 0x00cd
                     00CD   658 _TMR4H	=	0x00cd
                     00E8   659 G$ADC2CN$0$0 == 0x00e8
                     00E8   660 _ADC2CN	=	0x00e8
                     0091   661 G$MAC0BL$0$0 == 0x0091
                     0091   662 _MAC0BL	=	0x0091
                     0092   663 G$MAC0BH$0$0 == 0x0092
                     0092   664 _MAC0BH	=	0x0092
                     0093   665 G$MAC0ACC0$0$0 == 0x0093
                     0093   666 _MAC0ACC0	=	0x0093
                     0094   667 G$MAC0ACC1$0$0 == 0x0094
                     0094   668 _MAC0ACC1	=	0x0094
                     0095   669 G$MAC0ACC2$0$0 == 0x0095
                     0095   670 _MAC0ACC2	=	0x0095
                     0096   671 G$MAC0ACC3$0$0 == 0x0096
                     0096   672 _MAC0ACC3	=	0x0096
                     0097   673 G$MAC0OVR$0$0 == 0x0097
                     0097   674 _MAC0OVR	=	0x0097
                     00C0   675 G$MAC0STA$0$0 == 0x00c0
                     00C0   676 _MAC0STA	=	0x00c0
                     00C1   677 G$MAC0AL$0$0 == 0x00c1
                     00C1   678 _MAC0AL	=	0x00c1
                     00C2   679 G$MAC0AH$0$0 == 0x00c2
                     00C2   680 _MAC0AH	=	0x00c2
                     00C3   681 G$MAC0CF$0$0 == 0x00c3
                     00C3   682 _MAC0CF	=	0x00c3
                     00CE   683 G$MAC0RNDL$0$0 == 0x00ce
                     00CE   684 _MAC0RNDL	=	0x00ce
                     00CF   685 G$MAC0RNDH$0$0 == 0x00cf
                     00CF   686 _MAC0RNDH	=	0x00cf
                     0088   687 G$FLSTAT$0$0 == 0x0088
                     0088   688 _FLSTAT	=	0x0088
                     0089   689 G$PLL0CN$0$0 == 0x0089
                     0089   690 _PLL0CN	=	0x0089
                     008A   691 G$OSCICN$0$0 == 0x008a
                     008A   692 _OSCICN	=	0x008a
                     008B   693 G$OSCICL$0$0 == 0x008b
                     008B   694 _OSCICL	=	0x008b
                     008C   695 G$OSCXCN$0$0 == 0x008c
                     008C   696 _OSCXCN	=	0x008c
                     008D   697 G$PLL0DIV$0$0 == 0x008d
                     008D   698 _PLL0DIV	=	0x008d
                     008E   699 G$PLL0MUL$0$0 == 0x008e
                     008E   700 _PLL0MUL	=	0x008e
                     008F   701 G$PLL0FLT$0$0 == 0x008f
                     008F   702 _PLL0FLT	=	0x008f
                     0096   703 G$SFRPGCN$0$0 == 0x0096
                     0096   704 _SFRPGCN	=	0x0096
                     0097   705 G$CLKSEL$0$0 == 0x0097
                     0097   706 _CLKSEL	=	0x0097
                     009A   707 G$CCH0MA$0$0 == 0x009a
                     009A   708 _CCH0MA	=	0x009a
                     009C   709 G$P4MDOUT$0$0 == 0x009c
                     009C   710 _P4MDOUT	=	0x009c
                     009D   711 G$P5MDOUT$0$0 == 0x009d
                     009D   712 _P5MDOUT	=	0x009d
                     009E   713 G$P6MDOUT$0$0 == 0x009e
                     009E   714 _P6MDOUT	=	0x009e
                     009F   715 G$P7MDOUT$0$0 == 0x009f
                     009F   716 _P7MDOUT	=	0x009f
                     00A1   717 G$CCH0CN$0$0 == 0x00a1
                     00A1   718 _CCH0CN	=	0x00a1
                     00A2   719 G$CCH0TN$0$0 == 0x00a2
                     00A2   720 _CCH0TN	=	0x00a2
                     00A3   721 G$CCH0LC$0$0 == 0x00a3
                     00A3   722 _CCH0LC	=	0x00a3
                     00A4   723 G$P0MDOUT$0$0 == 0x00a4
                     00A4   724 _P0MDOUT	=	0x00a4
                     00A5   725 G$P1MDOUT$0$0 == 0x00a5
                     00A5   726 _P1MDOUT	=	0x00a5
                     00A6   727 G$P2MDOUT$0$0 == 0x00a6
                     00A6   728 _P2MDOUT	=	0x00a6
                     00A7   729 G$P3MDOUT$0$0 == 0x00a7
                     00A7   730 _P3MDOUT	=	0x00a7
                     00AD   731 G$P1MDIN$0$0 == 0x00ad
                     00AD   732 _P1MDIN	=	0x00ad
                     00B7   733 G$FLACL$0$0 == 0x00b7
                     00B7   734 _FLACL	=	0x00b7
                     00C8   735 G$P4$0$0 == 0x00c8
                     00C8   736 _P4	=	0x00c8
                     00D8   737 G$P5$0$0 == 0x00d8
                     00D8   738 _P5	=	0x00d8
                     00E1   739 G$XBR0$0$0 == 0x00e1
                     00E1   740 _XBR0	=	0x00e1
                     00E2   741 G$XBR1$0$0 == 0x00e2
                     00E2   742 _XBR1	=	0x00e2
                     00E3   743 G$XBR2$0$0 == 0x00e3
                     00E3   744 _XBR2	=	0x00e3
                     00E8   745 G$P6$0$0 == 0x00e8
                     00E8   746 _P6	=	0x00e8
                     00F8   747 G$P7$0$0 == 0x00f8
                     00F8   748 _P7	=	0x00f8
                     8C8A   749 G$TMR0$0$0 == 0x8c8a
                     8C8A   750 _TMR0	=	0x8c8a
                     8D8B   751 G$TMR1$0$0 == 0x8d8b
                     8D8B   752 _TMR1	=	0x8d8b
                     CDCC   753 G$TMR2$0$0 == 0xcdcc
                     CDCC   754 _TMR2	=	0xcdcc
                     CBCA   755 G$RCAP2$0$0 == 0xcbca
                     CBCA   756 _RCAP2	=	0xcbca
                     BFBE   757 G$ADC0$0$0 == 0xbfbe
                     BFBE   758 _ADC0	=	0xbfbe
                     C5C4   759 G$ADC0GT$0$0 == 0xc5c4
                     C5C4   760 _ADC0GT	=	0xc5c4
                     C7C6   761 G$ADC0LT$0$0 == 0xc7c6
                     C7C6   762 _ADC0LT	=	0xc7c6
                     D3D2   763 G$DAC0$0$0 == 0xd3d2
                     D3D2   764 _DAC0	=	0xd3d2
                     FAF9   765 G$PCA0$0$0 == 0xfaf9
                     FAF9   766 _PCA0	=	0xfaf9
                     FCFB   767 G$PCA0CP0$0$0 == 0xfcfb
                     FCFB   768 _PCA0CP0	=	0xfcfb
                     FEFD   769 G$PCA0CP1$0$0 == 0xfefd
                     FEFD   770 _PCA0CP1	=	0xfefd
                     EAE9   771 G$PCA0CP2$0$0 == 0xeae9
                     EAE9   772 _PCA0CP2	=	0xeae9
                     ECEB   773 G$PCA0CP3$0$0 == 0xeceb
                     ECEB   774 _PCA0CP3	=	0xeceb
                     EEED   775 G$PCA0CP4$0$0 == 0xeeed
                     EEED   776 _PCA0CP4	=	0xeeed
                     E2E1   777 G$PCA0CP5$0$0 == 0xe2e1
                     E2E1   778 _PCA0CP5	=	0xe2e1
                     CDCC   779 G$TMR3$0$0 == 0xcdcc
                     CDCC   780 _TMR3	=	0xcdcc
                     CBCA   781 G$RCAP3$0$0 == 0xcbca
                     CBCA   782 _RCAP3	=	0xcbca
                     D3D2   783 G$DAC1$0$0 == 0xd3d2
                     D3D2   784 _DAC1	=	0xd3d2
                     CDCC   785 G$TMR4$0$0 == 0xcdcc
                     CDCC   786 _TMR4	=	0xcdcc
                     CBCA   787 G$RCAP4$0$0 == 0xcbca
                     CBCA   788 _RCAP4	=	0xcbca
                     C2C1   789 G$MAC0A$0$0 == 0xc2c1
                     C2C1   790 _MAC0A	=	0xc2c1
                     96959493   791 G$MAC0ACC$0$0 == 0x96959493
                     96959493   792 _MAC0ACC	=	0x96959493
                     CFCE   793 G$MAC0RND$0$0 == 0xcfce
                     CFCE   794 _MAC0RND	=	0xcfce
                            795 ;--------------------------------------------------------
                            796 ; special function bits
                            797 ;--------------------------------------------------------
                            798 	.area RSEG    (ABS,DATA)
   0000                     799 	.org 0x0000
                     0080   800 G$P0_0$0$0 == 0x0080
                     0080   801 _P0_0	=	0x0080
                     0081   802 G$P0_1$0$0 == 0x0081
                     0081   803 _P0_1	=	0x0081
                     0082   804 G$P0_2$0$0 == 0x0082
                     0082   805 _P0_2	=	0x0082
                     0083   806 G$P0_3$0$0 == 0x0083
                     0083   807 _P0_3	=	0x0083
                     0084   808 G$P0_4$0$0 == 0x0084
                     0084   809 _P0_4	=	0x0084
                     0085   810 G$P0_5$0$0 == 0x0085
                     0085   811 _P0_5	=	0x0085
                     0086   812 G$P0_6$0$0 == 0x0086
                     0086   813 _P0_6	=	0x0086
                     0087   814 G$P0_7$0$0 == 0x0087
                     0087   815 _P0_7	=	0x0087
                     0088   816 G$IT0$0$0 == 0x0088
                     0088   817 _IT0	=	0x0088
                     0089   818 G$IE0$0$0 == 0x0089
                     0089   819 _IE0	=	0x0089
                     008A   820 G$IT1$0$0 == 0x008a
                     008A   821 _IT1	=	0x008a
                     008B   822 G$IE1$0$0 == 0x008b
                     008B   823 _IE1	=	0x008b
                     008C   824 G$TR0$0$0 == 0x008c
                     008C   825 _TR0	=	0x008c
                     008D   826 G$TF0$0$0 == 0x008d
                     008D   827 _TF0	=	0x008d
                     008E   828 G$TR1$0$0 == 0x008e
                     008E   829 _TR1	=	0x008e
                     008F   830 G$TF1$0$0 == 0x008f
                     008F   831 _TF1	=	0x008f
                     0088   832 G$CP0HYN0$0$0 == 0x0088
                     0088   833 _CP0HYN0	=	0x0088
                     0089   834 G$CP0HYN1$0$0 == 0x0089
                     0089   835 _CP0HYN1	=	0x0089
                     008A   836 G$CP0HYP0$0$0 == 0x008a
                     008A   837 _CP0HYP0	=	0x008a
                     008B   838 G$CP0HYP1$0$0 == 0x008b
                     008B   839 _CP0HYP1	=	0x008b
                     008C   840 G$CP0FIF$0$0 == 0x008c
                     008C   841 _CP0FIF	=	0x008c
                     008D   842 G$CP0RIF$0$0 == 0x008d
                     008D   843 _CP0RIF	=	0x008d
                     008E   844 G$CP0OUT$0$0 == 0x008e
                     008E   845 _CP0OUT	=	0x008e
                     008F   846 G$CP0EN$0$0 == 0x008f
                     008F   847 _CP0EN	=	0x008f
                     0088   848 G$CP1HYN0$0$0 == 0x0088
                     0088   849 _CP1HYN0	=	0x0088
                     0089   850 G$CP1HYN1$0$0 == 0x0089
                     0089   851 _CP1HYN1	=	0x0089
                     008A   852 G$CP1HYP0$0$0 == 0x008a
                     008A   853 _CP1HYP0	=	0x008a
                     008B   854 G$CP1HYP1$0$0 == 0x008b
                     008B   855 _CP1HYP1	=	0x008b
                     008C   856 G$CP1FIF$0$0 == 0x008c
                     008C   857 _CP1FIF	=	0x008c
                     008D   858 G$CP1RIF$0$0 == 0x008d
                     008D   859 _CP1RIF	=	0x008d
                     008E   860 G$CP1OUT$0$0 == 0x008e
                     008E   861 _CP1OUT	=	0x008e
                     008F   862 G$CP1EN$0$0 == 0x008f
                     008F   863 _CP1EN	=	0x008f
                     0088   864 G$FLHBUSY$0$0 == 0x0088
                     0088   865 _FLHBUSY	=	0x0088
                     0090   866 G$P1_0$0$0 == 0x0090
                     0090   867 _P1_0	=	0x0090
                     0091   868 G$P1_1$0$0 == 0x0091
                     0091   869 _P1_1	=	0x0091
                     0092   870 G$P1_2$0$0 == 0x0092
                     0092   871 _P1_2	=	0x0092
                     0093   872 G$P1_3$0$0 == 0x0093
                     0093   873 _P1_3	=	0x0093
                     0094   874 G$P1_4$0$0 == 0x0094
                     0094   875 _P1_4	=	0x0094
                     0095   876 G$P1_5$0$0 == 0x0095
                     0095   877 _P1_5	=	0x0095
                     0096   878 G$P1_6$0$0 == 0x0096
                     0096   879 _P1_6	=	0x0096
                     0097   880 G$P1_7$0$0 == 0x0097
                     0097   881 _P1_7	=	0x0097
                     0098   882 G$RI0$0$0 == 0x0098
                     0098   883 _RI0	=	0x0098
                     0098   884 G$RI$0$0 == 0x0098
                     0098   885 _RI	=	0x0098
                     0099   886 G$TI0$0$0 == 0x0099
                     0099   887 _TI0	=	0x0099
                     0099   888 G$TI$0$0 == 0x0099
                     0099   889 _TI	=	0x0099
                     009A   890 G$RB80$0$0 == 0x009a
                     009A   891 _RB80	=	0x009a
                     009B   892 G$TB80$0$0 == 0x009b
                     009B   893 _TB80	=	0x009b
                     009C   894 G$REN0$0$0 == 0x009c
                     009C   895 _REN0	=	0x009c
                     009C   896 G$REN$0$0 == 0x009c
                     009C   897 _REN	=	0x009c
                     009D   898 G$SM20$0$0 == 0x009d
                     009D   899 _SM20	=	0x009d
                     009E   900 G$SM10$0$0 == 0x009e
                     009E   901 _SM10	=	0x009e
                     009F   902 G$SM00$0$0 == 0x009f
                     009F   903 _SM00	=	0x009f
                     0098   904 G$RI1$0$0 == 0x0098
                     0098   905 _RI1	=	0x0098
                     0099   906 G$TI1$0$0 == 0x0099
                     0099   907 _TI1	=	0x0099
                     009A   908 G$RB81$0$0 == 0x009a
                     009A   909 _RB81	=	0x009a
                     009B   910 G$TB81$0$0 == 0x009b
                     009B   911 _TB81	=	0x009b
                     009C   912 G$REN1$0$0 == 0x009c
                     009C   913 _REN1	=	0x009c
                     009D   914 G$MCE1$0$0 == 0x009d
                     009D   915 _MCE1	=	0x009d
                     009F   916 G$S1MODE$0$0 == 0x009f
                     009F   917 _S1MODE	=	0x009f
                     00A0   918 G$P2_0$0$0 == 0x00a0
                     00A0   919 _P2_0	=	0x00a0
                     00A1   920 G$P2_1$0$0 == 0x00a1
                     00A1   921 _P2_1	=	0x00a1
                     00A2   922 G$P2_2$0$0 == 0x00a2
                     00A2   923 _P2_2	=	0x00a2
                     00A3   924 G$P2_3$0$0 == 0x00a3
                     00A3   925 _P2_3	=	0x00a3
                     00A4   926 G$P2_4$0$0 == 0x00a4
                     00A4   927 _P2_4	=	0x00a4
                     00A5   928 G$P2_5$0$0 == 0x00a5
                     00A5   929 _P2_5	=	0x00a5
                     00A6   930 G$P2_6$0$0 == 0x00a6
                     00A6   931 _P2_6	=	0x00a6
                     00A7   932 G$P2_7$0$0 == 0x00a7
                     00A7   933 _P2_7	=	0x00a7
                     00A8   934 G$EX0$0$0 == 0x00a8
                     00A8   935 _EX0	=	0x00a8
                     00A9   936 G$ET0$0$0 == 0x00a9
                     00A9   937 _ET0	=	0x00a9
                     00AA   938 G$EX1$0$0 == 0x00aa
                     00AA   939 _EX1	=	0x00aa
                     00AB   940 G$ET1$0$0 == 0x00ab
                     00AB   941 _ET1	=	0x00ab
                     00AC   942 G$ES0$0$0 == 0x00ac
                     00AC   943 _ES0	=	0x00ac
                     00AC   944 G$ES$0$0 == 0x00ac
                     00AC   945 _ES	=	0x00ac
                     00AD   946 G$ET2$0$0 == 0x00ad
                     00AD   947 _ET2	=	0x00ad
                     00AF   948 G$EA$0$0 == 0x00af
                     00AF   949 _EA	=	0x00af
                     00B0   950 G$P3_0$0$0 == 0x00b0
                     00B0   951 _P3_0	=	0x00b0
                     00B1   952 G$P3_1$0$0 == 0x00b1
                     00B1   953 _P3_1	=	0x00b1
                     00B2   954 G$P3_2$0$0 == 0x00b2
                     00B2   955 _P3_2	=	0x00b2
                     00B3   956 G$P3_3$0$0 == 0x00b3
                     00B3   957 _P3_3	=	0x00b3
                     00B4   958 G$P3_4$0$0 == 0x00b4
                     00B4   959 _P3_4	=	0x00b4
                     00B5   960 G$P3_5$0$0 == 0x00b5
                     00B5   961 _P3_5	=	0x00b5
                     00B6   962 G$P3_6$0$0 == 0x00b6
                     00B6   963 _P3_6	=	0x00b6
                     00B7   964 G$P3_7$0$0 == 0x00b7
                     00B7   965 _P3_7	=	0x00b7
                     00B8   966 G$PX0$0$0 == 0x00b8
                     00B8   967 _PX0	=	0x00b8
                     00B9   968 G$PT0$0$0 == 0x00b9
                     00B9   969 _PT0	=	0x00b9
                     00BA   970 G$PX1$0$0 == 0x00ba
                     00BA   971 _PX1	=	0x00ba
                     00BB   972 G$PT1$0$0 == 0x00bb
                     00BB   973 _PT1	=	0x00bb
                     00BC   974 G$PS0$0$0 == 0x00bc
                     00BC   975 _PS0	=	0x00bc
                     00BC   976 G$PS$0$0 == 0x00bc
                     00BC   977 _PS	=	0x00bc
                     00BD   978 G$PT2$0$0 == 0x00bd
                     00BD   979 _PT2	=	0x00bd
                     00C0   980 G$SMBTOE$0$0 == 0x00c0
                     00C0   981 _SMBTOE	=	0x00c0
                     00C1   982 G$SMBFTE$0$0 == 0x00c1
                     00C1   983 _SMBFTE	=	0x00c1
                     00C2   984 G$AA$0$0 == 0x00c2
                     00C2   985 _AA	=	0x00c2
                     00C3   986 G$SI$0$0 == 0x00c3
                     00C3   987 _SI	=	0x00c3
                     00C4   988 G$STO$0$0 == 0x00c4
                     00C4   989 _STO	=	0x00c4
                     00C5   990 G$STA$0$0 == 0x00c5
                     00C5   991 _STA	=	0x00c5
                     00C6   992 G$ENSMB$0$0 == 0x00c6
                     00C6   993 _ENSMB	=	0x00c6
                     00C7   994 G$BUSY$0$0 == 0x00c7
                     00C7   995 _BUSY	=	0x00c7
                     00C0   996 G$MAC0N$0$0 == 0x00c0
                     00C0   997 _MAC0N	=	0x00c0
                     00C1   998 G$MAC0SO$0$0 == 0x00c1
                     00C1   999 _MAC0SO	=	0x00c1
                     00C2  1000 G$MAC0Z$0$0 == 0x00c2
                     00C2  1001 _MAC0Z	=	0x00c2
                     00C3  1002 G$MAC0HO$0$0 == 0x00c3
                     00C3  1003 _MAC0HO	=	0x00c3
                     00C8  1004 G$CPRL2$0$0 == 0x00c8
                     00C8  1005 _CPRL2	=	0x00c8
                     00C9  1006 G$CT2$0$0 == 0x00c9
                     00C9  1007 _CT2	=	0x00c9
                     00CA  1008 G$TR2$0$0 == 0x00ca
                     00CA  1009 _TR2	=	0x00ca
                     00CB  1010 G$EXEN2$0$0 == 0x00cb
                     00CB  1011 _EXEN2	=	0x00cb
                     00CE  1012 G$EXF2$0$0 == 0x00ce
                     00CE  1013 _EXF2	=	0x00ce
                     00CF  1014 G$TF2$0$0 == 0x00cf
                     00CF  1015 _TF2	=	0x00cf
                     00C8  1016 G$CPRL3$0$0 == 0x00c8
                     00C8  1017 _CPRL3	=	0x00c8
                     00C9  1018 G$CT3$0$0 == 0x00c9
                     00C9  1019 _CT3	=	0x00c9
                     00CA  1020 G$TR3$0$0 == 0x00ca
                     00CA  1021 _TR3	=	0x00ca
                     00CB  1022 G$EXEN3$0$0 == 0x00cb
                     00CB  1023 _EXEN3	=	0x00cb
                     00CE  1024 G$EXF3$0$0 == 0x00ce
                     00CE  1025 _EXF3	=	0x00ce
                     00CF  1026 G$TF3$0$0 == 0x00cf
                     00CF  1027 _TF3	=	0x00cf
                     00C8  1028 G$CPRL4$0$0 == 0x00c8
                     00C8  1029 _CPRL4	=	0x00c8
                     00C9  1030 G$CT4$0$0 == 0x00c9
                     00C9  1031 _CT4	=	0x00c9
                     00CA  1032 G$TR4$0$0 == 0x00ca
                     00CA  1033 _TR4	=	0x00ca
                     00CB  1034 G$EXEN4$0$0 == 0x00cb
                     00CB  1035 _EXEN4	=	0x00cb
                     00CE  1036 G$EXF4$0$0 == 0x00ce
                     00CE  1037 _EXF4	=	0x00ce
                     00CF  1038 G$TF4$0$0 == 0x00cf
                     00CF  1039 _TF4	=	0x00cf
                     00C8  1040 G$P4_0$0$0 == 0x00c8
                     00C8  1041 _P4_0	=	0x00c8
                     00C9  1042 G$P4_1$0$0 == 0x00c9
                     00C9  1043 _P4_1	=	0x00c9
                     00CA  1044 G$P4_2$0$0 == 0x00ca
                     00CA  1045 _P4_2	=	0x00ca
                     00CB  1046 G$P4_3$0$0 == 0x00cb
                     00CB  1047 _P4_3	=	0x00cb
                     00CC  1048 G$P4_4$0$0 == 0x00cc
                     00CC  1049 _P4_4	=	0x00cc
                     00CD  1050 G$P4_5$0$0 == 0x00cd
                     00CD  1051 _P4_5	=	0x00cd
                     00CE  1052 G$P4_6$0$0 == 0x00ce
                     00CE  1053 _P4_6	=	0x00ce
                     00CF  1054 G$P4_7$0$0 == 0x00cf
                     00CF  1055 _P4_7	=	0x00cf
                     00D0  1056 G$P$0$0 == 0x00d0
                     00D0  1057 _P	=	0x00d0
                     00D1  1058 G$F1$0$0 == 0x00d1
                     00D1  1059 _F1	=	0x00d1
                     00D2  1060 G$OV$0$0 == 0x00d2
                     00D2  1061 _OV	=	0x00d2
                     00D3  1062 G$RS0$0$0 == 0x00d3
                     00D3  1063 _RS0	=	0x00d3
                     00D4  1064 G$RS1$0$0 == 0x00d4
                     00D4  1065 _RS1	=	0x00d4
                     00D5  1066 G$F0$0$0 == 0x00d5
                     00D5  1067 _F0	=	0x00d5
                     00D6  1068 G$AC$0$0 == 0x00d6
                     00D6  1069 _AC	=	0x00d6
                     00D7  1070 G$CY$0$0 == 0x00d7
                     00D7  1071 _CY	=	0x00d7
                     00D8  1072 G$CCF0$0$0 == 0x00d8
                     00D8  1073 _CCF0	=	0x00d8
                     00D9  1074 G$CCF1$0$0 == 0x00d9
                     00D9  1075 _CCF1	=	0x00d9
                     00DA  1076 G$CCF2$0$0 == 0x00da
                     00DA  1077 _CCF2	=	0x00da
                     00DB  1078 G$CCF3$0$0 == 0x00db
                     00DB  1079 _CCF3	=	0x00db
                     00DC  1080 G$CCF4$0$0 == 0x00dc
                     00DC  1081 _CCF4	=	0x00dc
                     00DD  1082 G$CCF5$0$0 == 0x00dd
                     00DD  1083 _CCF5	=	0x00dd
                     00DE  1084 G$CR$0$0 == 0x00de
                     00DE  1085 _CR	=	0x00de
                     00DF  1086 G$CF$0$0 == 0x00df
                     00DF  1087 _CF	=	0x00df
                     00D8  1088 G$P5_0$0$0 == 0x00d8
                     00D8  1089 _P5_0	=	0x00d8
                     00D9  1090 G$P5_1$0$0 == 0x00d9
                     00D9  1091 _P5_1	=	0x00d9
                     00DA  1092 G$P5_2$0$0 == 0x00da
                     00DA  1093 _P5_2	=	0x00da
                     00DB  1094 G$P5_3$0$0 == 0x00db
                     00DB  1095 _P5_3	=	0x00db
                     00DC  1096 G$P5_4$0$0 == 0x00dc
                     00DC  1097 _P5_4	=	0x00dc
                     00DD  1098 G$P5_5$0$0 == 0x00dd
                     00DD  1099 _P5_5	=	0x00dd
                     00DE  1100 G$P5_6$0$0 == 0x00de
                     00DE  1101 _P5_6	=	0x00de
                     00DF  1102 G$P5_7$0$0 == 0x00df
                     00DF  1103 _P5_7	=	0x00df
                     00E8  1104 G$AD0LJST$0$0 == 0x00e8
                     00E8  1105 _AD0LJST	=	0x00e8
                     00E9  1106 G$AD0WINT$0$0 == 0x00e9
                     00E9  1107 _AD0WINT	=	0x00e9
                     00EA  1108 G$AD0CM0$0$0 == 0x00ea
                     00EA  1109 _AD0CM0	=	0x00ea
                     00EB  1110 G$AD0CM1$0$0 == 0x00eb
                     00EB  1111 _AD0CM1	=	0x00eb
                     00EC  1112 G$AD0BUSY$0$0 == 0x00ec
                     00EC  1113 _AD0BUSY	=	0x00ec
                     00ED  1114 G$AD0INT$0$0 == 0x00ed
                     00ED  1115 _AD0INT	=	0x00ed
                     00EE  1116 G$AD0TM$0$0 == 0x00ee
                     00EE  1117 _AD0TM	=	0x00ee
                     00EF  1118 G$AD0EN$0$0 == 0x00ef
                     00EF  1119 _AD0EN	=	0x00ef
                     00E8  1120 G$AD2WINT$0$0 == 0x00e8
                     00E8  1121 _AD2WINT	=	0x00e8
                     00E9  1122 G$AD2CM0$0$0 == 0x00e9
                     00E9  1123 _AD2CM0	=	0x00e9
                     00EA  1124 G$AD2CM1$0$0 == 0x00ea
                     00EA  1125 _AD2CM1	=	0x00ea
                     00EB  1126 G$AD2CM2$0$0 == 0x00eb
                     00EB  1127 _AD2CM2	=	0x00eb
                     00EC  1128 G$AD2BUSY$0$0 == 0x00ec
                     00EC  1129 _AD2BUSY	=	0x00ec
                     00ED  1130 G$AD2INT$0$0 == 0x00ed
                     00ED  1131 _AD2INT	=	0x00ed
                     00EE  1132 G$AD2TM$0$0 == 0x00ee
                     00EE  1133 _AD2TM	=	0x00ee
                     00EF  1134 G$AD2EN$0$0 == 0x00ef
                     00EF  1135 _AD2EN	=	0x00ef
                     00E8  1136 G$P6_0$0$0 == 0x00e8
                     00E8  1137 _P6_0	=	0x00e8
                     00E9  1138 G$P6_1$0$0 == 0x00e9
                     00E9  1139 _P6_1	=	0x00e9
                     00EA  1140 G$P6_2$0$0 == 0x00ea
                     00EA  1141 _P6_2	=	0x00ea
                     00EB  1142 G$P6_3$0$0 == 0x00eb
                     00EB  1143 _P6_3	=	0x00eb
                     00EC  1144 G$P6_4$0$0 == 0x00ec
                     00EC  1145 _P6_4	=	0x00ec
                     00ED  1146 G$P6_5$0$0 == 0x00ed
                     00ED  1147 _P6_5	=	0x00ed
                     00EE  1148 G$P6_6$0$0 == 0x00ee
                     00EE  1149 _P6_6	=	0x00ee
                     00EF  1150 G$P6_7$0$0 == 0x00ef
                     00EF  1151 _P6_7	=	0x00ef
                     00F8  1152 G$SPIEN$0$0 == 0x00f8
                     00F8  1153 _SPIEN	=	0x00f8
                     00F9  1154 G$TXBMT$0$0 == 0x00f9
                     00F9  1155 _TXBMT	=	0x00f9
                     00FA  1156 G$NSSMD0$0$0 == 0x00fa
                     00FA  1157 _NSSMD0	=	0x00fa
                     00FB  1158 G$NSSMD1$0$0 == 0x00fb
                     00FB  1159 _NSSMD1	=	0x00fb
                     00FC  1160 G$RXOVRN$0$0 == 0x00fc
                     00FC  1161 _RXOVRN	=	0x00fc
                     00FD  1162 G$MODF$0$0 == 0x00fd
                     00FD  1163 _MODF	=	0x00fd
                     00FE  1164 G$WCOL$0$0 == 0x00fe
                     00FE  1165 _WCOL	=	0x00fe
                     00FF  1166 G$SPIF$0$0 == 0x00ff
                     00FF  1167 _SPIF	=	0x00ff
                     00F8  1168 G$P7_0$0$0 == 0x00f8
                     00F8  1169 _P7_0	=	0x00f8
                     00F9  1170 G$P7_1$0$0 == 0x00f9
                     00F9  1171 _P7_1	=	0x00f9
                     00FA  1172 G$P7_2$0$0 == 0x00fa
                     00FA  1173 _P7_2	=	0x00fa
                     00FB  1174 G$P7_3$0$0 == 0x00fb
                     00FB  1175 _P7_3	=	0x00fb
                     00FC  1176 G$P7_4$0$0 == 0x00fc
                     00FC  1177 _P7_4	=	0x00fc
                     00FD  1178 G$P7_5$0$0 == 0x00fd
                     00FD  1179 _P7_5	=	0x00fd
                     00FE  1180 G$P7_6$0$0 == 0x00fe
                     00FE  1181 _P7_6	=	0x00fe
                     00FF  1182 G$P7_7$0$0 == 0x00ff
                     00FF  1183 _P7_7	=	0x00ff
                           1184 ;--------------------------------------------------------
                           1185 ; overlayable register banks
                           1186 ;--------------------------------------------------------
                           1187 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1188 	.ds 8
                           1189 ;--------------------------------------------------------
                           1190 ; internal ram data
                           1191 ;--------------------------------------------------------
                           1192 	.area DSEG    (DATA)
                     0000  1193 G$start_conversion$0$0==.
   0008                    1194 _start_conversion::
   0008                    1195 	.ds 1
                     0001  1196 G$dig_val$0$0==.
   0009                    1197 _dig_val::
   0009                    1198 	.ds 2
                     0003  1199 Lpart4a.main$adcValH$1$29==.
   000B                    1200 _main_adcValH_1_29:
   000B                    1201 	.ds 5
                     0008  1202 Lpart4a.main$adcValL$1$29==.
   0010                    1203 _main_adcValL_1_29:
   0010                    1204 	.ds 5
                     000D  1205 Lpart4a.main$results$1$29==.
   0015                    1206 _main_results_1_29:
   0015                    1207 	.ds 4
                           1208 ;--------------------------------------------------------
                           1209 ; overlayable items in internal ram 
                           1210 ;--------------------------------------------------------
                           1211 	.area	OSEG    (OVR,DATA)
                           1212 	.area	OSEG    (OVR,DATA)
                           1213 	.area	OSEG    (OVR,DATA)
                           1214 ;--------------------------------------------------------
                           1215 ; Stack segment in internal ram 
                           1216 ;--------------------------------------------------------
                           1217 	.area	SSEG	(DATA)
   0019                    1218 __start__stack:
   0019                    1219 	.ds	1
                           1220 
                           1221 ;--------------------------------------------------------
                           1222 ; indirectly addressable internal ram data
                           1223 ;--------------------------------------------------------
                           1224 	.area ISEG    (DATA)
                           1225 ;--------------------------------------------------------
                           1226 ; absolute internal ram data
                           1227 ;--------------------------------------------------------
                           1228 	.area IABS    (ABS,DATA)
                           1229 	.area IABS    (ABS,DATA)
                           1230 ;--------------------------------------------------------
                           1231 ; bit data
                           1232 ;--------------------------------------------------------
                           1233 	.area BSEG    (BIT)
                           1234 ;--------------------------------------------------------
                           1235 ; paged external ram data
                           1236 ;--------------------------------------------------------
                           1237 	.area PSEG    (PAG,XDATA)
                           1238 ;--------------------------------------------------------
                           1239 ; external ram data
                           1240 ;--------------------------------------------------------
                           1241 	.area XSEG    (XDATA)
                           1242 ;--------------------------------------------------------
                           1243 ; absolute external ram data
                           1244 ;--------------------------------------------------------
                           1245 	.area XABS    (ABS,XDATA)
                           1246 ;--------------------------------------------------------
                           1247 ; external initialized ram data
                           1248 ;--------------------------------------------------------
                           1249 	.area XISEG   (XDATA)
                           1250 	.area HOME    (CODE)
                           1251 	.area GSINIT0 (CODE)
                           1252 	.area GSINIT1 (CODE)
                           1253 	.area GSINIT2 (CODE)
                           1254 	.area GSINIT3 (CODE)
                           1255 	.area GSINIT4 (CODE)
                           1256 	.area GSINIT5 (CODE)
                           1257 	.area GSINIT  (CODE)
                           1258 	.area GSFINAL (CODE)
                           1259 	.area CSEG    (CODE)
                           1260 ;--------------------------------------------------------
                           1261 ; interrupt vector 
                           1262 ;--------------------------------------------------------
                           1263 	.area HOME    (CODE)
   0000                    1264 __interrupt_vect:
   0000 02 00 06      [24] 1265 	ljmp	__sdcc_gsinit_startup
                           1266 ;--------------------------------------------------------
                           1267 ; global & static initialisations
                           1268 ;--------------------------------------------------------
                           1269 	.area HOME    (CODE)
                           1270 	.area GSINIT  (CODE)
                           1271 	.area GSFINAL (CODE)
                           1272 	.area GSINIT  (CODE)
                           1273 	.globl __sdcc_gsinit_startup
                           1274 	.globl __sdcc_program_startup
                           1275 	.globl __start__stack
                           1276 	.globl __mcs51_genXINIT
                           1277 	.globl __mcs51_genXRAMCLEAR
                           1278 	.globl __mcs51_genRAMCLEAR
                     0000  1279 	C$part4a.c$34$1$46 ==.
                           1280 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:34: char start_conversion = 0; // Flag to indicate when to start the ADC
   005F 75 08 00      [24] 1281 	mov	_start_conversion,#0x00
                     0003  1282 	C$part4a.c$35$1$46 ==.
                           1283 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:35: unsigned int dig_val = 0;
   0062 E4            [12] 1284 	clr	a
   0063 F5 09         [12] 1285 	mov	_dig_val,a
   0065 F5 0A         [12] 1286 	mov	(_dig_val + 1),a
                           1287 	.area GSFINAL (CODE)
   0067 02 00 03      [24] 1288 	ljmp	__sdcc_program_startup
                           1289 ;--------------------------------------------------------
                           1290 ; Home
                           1291 ;--------------------------------------------------------
                           1292 	.area HOME    (CODE)
                           1293 	.area HOME    (CODE)
   0003                    1294 __sdcc_program_startup:
   0003 02 00 7D      [24] 1295 	ljmp	_main
                           1296 ;	return from main will return to caller
                           1297 ;--------------------------------------------------------
                           1298 ; code
                           1299 ;--------------------------------------------------------
                           1300 	.area CSEG    (CODE)
                           1301 ;------------------------------------------------------------
                           1302 ;Allocation info for local variables in function 'putchar'
                           1303 ;------------------------------------------------------------
                           1304 ;c                         Allocated to registers r7 
                           1305 ;------------------------------------------------------------
                     0000  1306 	G$putchar$0$0 ==.
                     0000  1307 	C$putget.h$18$0$0 ==.
                           1308 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:18: void putchar(char c)
                           1309 ;	-----------------------------------------
                           1310 ;	 function putchar
                           1311 ;	-----------------------------------------
   006A                    1312 _putchar:
                     0007  1313 	ar7 = 0x07
                     0006  1314 	ar6 = 0x06
                     0005  1315 	ar5 = 0x05
                     0004  1316 	ar4 = 0x04
                     0003  1317 	ar3 = 0x03
                     0002  1318 	ar2 = 0x02
                     0001  1319 	ar1 = 0x01
                     0000  1320 	ar0 = 0x00
   006A AF 82         [24] 1321 	mov	r7,dpl
                     0002  1322 	C$putget.h$20$1$16 ==.
                           1323 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:20: while(!TI0); 
   006C                    1324 00101$:
                     0002  1325 	C$putget.h$21$1$16 ==.
                           1326 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:21: TI0=0;
   006C 10 99 02      [24] 1327 	jbc	_TI0,00112$
   006F 80 FB         [24] 1328 	sjmp	00101$
   0071                    1329 00112$:
                     0007  1330 	C$putget.h$22$1$16 ==.
                           1331 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:22: SBUF0 = c;
   0071 8F 99         [24] 1332 	mov	_SBUF0,r7
                     0009  1333 	C$putget.h$23$1$16 ==.
                     0009  1334 	XG$putchar$0$0 ==.
   0073 22            [24] 1335 	ret
                           1336 ;------------------------------------------------------------
                           1337 ;Allocation info for local variables in function 'getchar'
                           1338 ;------------------------------------------------------------
                           1339 ;c                         Allocated to registers 
                           1340 ;------------------------------------------------------------
                     000A  1341 	G$getchar$0$0 ==.
                     000A  1342 	C$putget.h$28$1$16 ==.
                           1343 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:28: char getchar(void)
                           1344 ;	-----------------------------------------
                           1345 ;	 function getchar
                           1346 ;	-----------------------------------------
   0074                    1347 _getchar:
                     000A  1348 	C$putget.h$31$1$18 ==.
                           1349 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:31: while(!RI0);
   0074                    1350 00101$:
                     000A  1351 	C$putget.h$32$1$18 ==.
                           1352 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:32: RI0 =0;
   0074 10 98 02      [24] 1353 	jbc	_RI0,00112$
   0077 80 FB         [24] 1354 	sjmp	00101$
   0079                    1355 00112$:
                     000F  1356 	C$putget.h$33$1$18 ==.
                           1357 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:33: c = SBUF0;
   0079 85 99 82      [24] 1358 	mov	dpl,_SBUF0
                     0012  1359 	C$putget.h$35$1$18 ==.
                           1360 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:35: return c;
                     0012  1361 	C$putget.h$36$1$18 ==.
                     0012  1362 	XG$getchar$0$0 ==.
   007C 22            [24] 1363 	ret
                           1364 ;------------------------------------------------------------
                           1365 ;Allocation info for local variables in function 'main'
                           1366 ;------------------------------------------------------------
                           1367 ;adcValH                   Allocated with name '_main_adcValH_1_29'
                           1368 ;adcValL                   Allocated with name '_main_adcValL_1_29'
                           1369 ;result                    Allocated to registers r6 r7 
                           1370 ;results                   Allocated with name '_main_results_1_29'
                           1371 ;analogval                 Allocated to registers 
                           1372 ;analoghi                  Allocated to registers r4 
                           1373 ;analoglow                 Allocated to registers r5 
                           1374 ;VREF                      Allocated to registers 
                           1375 ;------------------------------------------------------------
                     0013  1376 	G$main$0$0 ==.
                     0013  1377 	C$part4a.c$40$1$18 ==.
                           1378 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:40: void main(void)
                           1379 ;	-----------------------------------------
                           1380 ;	 function main
                           1381 ;	-----------------------------------------
   007D                    1382 _main:
                     0013  1383 	C$part4a.c$50$1$29 ==.
                           1384 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:50: WDTCN = 0xDE; // Disable the watchdog timer
   007D 75 FF DE      [24] 1385 	mov	_WDTCN,#0xDE
                     0016  1386 	C$part4a.c$51$1$29 ==.
                           1387 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:51: WDTCN = 0xAD;
   0080 75 FF AD      [24] 1388 	mov	_WDTCN,#0xAD
                     0019  1389 	C$part4a.c$53$1$29 ==.
                           1390 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:53: PORT_INIT(); // Initialize the Crossbar and GPIO
   0083 12 01 8C      [24] 1391 	lcall	_PORT_INIT
                     001C  1392 	C$part4a.c$54$1$29 ==.
                           1393 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:54: SYSCLK_INIT(); // Initialize the oscillator
   0086 12 01 65      [24] 1394 	lcall	_SYSCLK_INIT
                     001F  1395 	C$part4a.c$55$1$29 ==.
                           1396 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:55: ADC_INIT(); // Initialize ADC0
   0089 12 01 D1      [24] 1397 	lcall	_ADC_INIT
                     0022  1398 	C$part4a.c$56$1$29 ==.
                           1399 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:56: DAC_INIT();
   008C 12 01 E6      [24] 1400 	lcall	_DAC_INIT
                     0025  1401 	C$part4a.c$57$1$29 ==.
                           1402 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:57: MAC_INIT();
   008F 12 01 FB      [24] 1403 	lcall	_MAC_INIT
                     0028  1404 	C$part4a.c$59$1$29 ==.
                           1405 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:59: adcValH[4] = adcValH[3] = adcValL[4] = adcValL[3] = adcValH[2] = adcValH[1] = adcValL[2] = adcValL[1] = 0;
   0092 75 11 00      [24] 1406 	mov	(_main_adcValL_1_29 + 0x0001),#0x00
   0095 75 12 00      [24] 1407 	mov	(_main_adcValL_1_29 + 0x0002),#0x00
   0098 75 0C 00      [24] 1408 	mov	(_main_adcValH_1_29 + 0x0001),#0x00
   009B 75 0D 00      [24] 1409 	mov	(_main_adcValH_1_29 + 0x0002),#0x00
   009E 75 13 00      [24] 1410 	mov	(_main_adcValL_1_29 + 0x0003),#0x00
   00A1 75 14 00      [24] 1411 	mov	(_main_adcValL_1_29 + 0x0004),#0x00
   00A4 75 0E 00      [24] 1412 	mov	(_main_adcValH_1_29 + 0x0003),#0x00
   00A7 75 0F 00      [24] 1413 	mov	(_main_adcValH_1_29 + 0x0004),#0x00
                     0040  1414 	C$part4a.c$60$1$29 ==.
                           1415 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:60: result = 0;
   00AA 7E 00         [12] 1416 	mov	r6,#0x00
                     0042  1417 	C$part4a.c$61$1$29 ==.
                           1418 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:61: results[1] = results[0] = 0;
   00AC E4            [12] 1419 	clr	a
   00AD FF            [12] 1420 	mov	r7,a
   00AE F5 15         [12] 1421 	mov	(_main_results_1_29 + 0),a
   00B0 F5 16         [12] 1422 	mov	(_main_results_1_29 + 1),a
   00B2 F5 17         [12] 1423 	mov	((_main_results_1_29 + 0x0002) + 0),a
   00B4 F5 18         [12] 1424 	mov	((_main_results_1_29 + 0x0002) + 1),a
                     004C  1425 	C$part4a.c$62$1$29 ==.
                           1426 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:62: while(1)
   00B6                    1427 00105$:
                     004C  1428 	C$part4a.c$64$2$30 ==.
                           1429 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:64: SFRPAGE = ADC0_PAGE;
   00B6 75 84 00      [24] 1430 	mov	_SFRPAGE,#0x00
                     004F  1431 	C$part4a.c$65$2$30 ==.
                           1432 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:65: AD0INT = 0; // Clear the "conversion done" flag
   00B9 C2 ED         [12] 1433 	clr	_AD0INT
                     0051  1434 	C$part4a.c$66$2$30 ==.
                           1435 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:66: AD0BUSY = 1; // Start A/D Conversion
   00BB D2 EC         [12] 1436 	setb	_AD0BUSY
                     0053  1437 	C$part4a.c$67$2$30 ==.
                           1438 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:67: while (AD0INT == 0); // Wait for the conversion to finish
   00BD                    1439 00101$:
   00BD 30 ED FD      [24] 1440 	jnb	_AD0INT,00101$
                     0056  1441 	C$part4a.c$68$2$30 ==.
                           1442 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:68: analoglow = ADC0L; // Read the low byte
   00C0 AD BE         [24] 1443 	mov	r5,_ADC0L
                     0058  1444 	C$part4a.c$69$2$30 ==.
                           1445 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:69: analoghi = ADC0H; // Read the high byte
   00C2 AC BF         [24] 1446 	mov	r4,_ADC0H
                     005A  1447 	C$part4a.c$73$2$30 ==.
                           1448 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:73: adcValH[4] = adcValH[3]; // x(k-2) high byte
   00C4 AB 0E         [24] 1449 	mov	r3,(_main_adcValH_1_29 + 0x0003)
   00C6 8B 0F         [24] 1450 	mov	(_main_adcValH_1_29 + 0x0004),r3
                     005E  1451 	C$part4a.c$74$2$30 ==.
                           1452 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:74: adcValH[3] = adcValH[2]; // x(k-1) high byte
   00C8 AB 0D         [24] 1453 	mov	r3,(_main_adcValH_1_29 + 0x0002)
   00CA 8B 0E         [24] 1454 	mov	(_main_adcValH_1_29 + 0x0003),r3
                     0062  1455 	C$part4a.c$75$2$30 ==.
                           1456 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:75: adcValL[4] = adcValL[3]; // x(k-2) low byte
   00CC AB 13         [24] 1457 	mov	r3,(_main_adcValL_1_29 + 0x0003)
   00CE 8B 14         [24] 1458 	mov	(_main_adcValL_1_29 + 0x0004),r3
                     0066  1459 	C$part4a.c$76$2$30 ==.
                           1460 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:76: adcValL[3] = adcValL[2]; // x(k-1) low byte
   00D0 AB 12         [24] 1461 	mov	r3,(_main_adcValL_1_29 + 0x0002)
   00D2 8B 13         [24] 1462 	mov	(_main_adcValL_1_29 + 0x0003),r3
                     006A  1463 	C$part4a.c$77$2$30 ==.
                           1464 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:77: adcValH[2] = adcValH[1]; // x(k-2) high byte
   00D4 AB 0C         [24] 1465 	mov	r3,(_main_adcValH_1_29 + 0x0001)
   00D6 8B 0D         [24] 1466 	mov	(_main_adcValH_1_29 + 0x0002),r3
                     006E  1467 	C$part4a.c$78$2$30 ==.
                           1468 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:78: adcValH[1] = adcValH[0]; // x(k-1) high byte
   00D8 AB 0B         [24] 1469 	mov	r3,_main_adcValH_1_29
   00DA 8B 0C         [24] 1470 	mov	(_main_adcValH_1_29 + 0x0001),r3
                     0072  1471 	C$part4a.c$79$2$30 ==.
                           1472 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:79: adcValL[2] = adcValL[1]; // x(k-2) low byte
   00DC AB 11         [24] 1473 	mov	r3,(_main_adcValL_1_29 + 0x0001)
   00DE 8B 12         [24] 1474 	mov	(_main_adcValL_1_29 + 0x0002),r3
                     0076  1475 	C$part4a.c$80$2$30 ==.
                           1476 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:80: adcValL[1] = adcValL[0]; // x(k-1) low byte
   00E0 AB 10         [24] 1477 	mov	r3,_main_adcValL_1_29
   00E2 8B 11         [24] 1478 	mov	(_main_adcValL_1_29 + 0x0001),r3
                     007A  1479 	C$part4a.c$81$2$30 ==.
                           1480 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:81: results[1] = results[0];
   00E4 AA 15         [24] 1481 	mov	r2,_main_results_1_29
   00E6 AB 16         [24] 1482 	mov	r3,(_main_results_1_29 + 1)
   00E8 8A 17         [24] 1483 	mov	((_main_results_1_29 + 0x0002) + 0),r2
   00EA 8B 18         [24] 1484 	mov	((_main_results_1_29 + 0x0002) + 1),r3
                     0082  1485 	C$part4a.c$82$2$30 ==.
                           1486 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:82: results[0] = result;
   00EC 8E 15         [24] 1487 	mov	(_main_results_1_29 + 0),r6
   00EE 8F 16         [24] 1488 	mov	(_main_results_1_29 + 1),r7
                     0086  1489 	C$part4a.c$84$2$30 ==.
                           1490 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:84: adcValH[0] = analoghi; // x(k) high and low bytes
   00F0 8C 0B         [24] 1491 	mov	_main_adcValH_1_29,r4
                     0088  1492 	C$part4a.c$85$2$30 ==.
                           1493 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:85: adcValL[0] = analoglow;
   00F2 8D 10         [24] 1494 	mov	_main_adcValL_1_29,r5
                     008A  1495 	C$part4a.c$87$2$30 ==.
                           1496 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:87: SFRPAGE = MAC0_PAGE;
   00F4 75 84 03      [24] 1497 	mov	_SFRPAGE,#0x03
                     008D  1498 	C$part4a.c$88$2$30 ==.
                           1499 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:88: MAC0CF |= 0x08; // Clear MAC
   00F7 43 C3 08      [24] 1500 	orl	_MAC0CF,#0x08
                     0090  1501 	C$part4a.c$91$2$30 ==.
                           1502 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:91: MAC0AH = 0x20;
   00FA 75 C2 20      [24] 1503 	mov	_MAC0AH,#0x20
                     0093  1504 	C$part4a.c$92$2$30 ==.
                           1505 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:92: MAC0AL = 0x00;
   00FD 75 C1 00      [24] 1506 	mov	_MAC0AL,#0x00
                     0096  1507 	C$part4a.c$93$2$30 ==.
                           1508 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:93: MAC0BH = result>>8;
   0100 8F 92         [24] 1509 	mov	_MAC0BH,r7
                     0098  1510 	C$part4a.c$94$2$30 ==.
                           1511 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:94: MAC0BL = result;
   0102 8E 91         [24] 1512 	mov	_MAC0BL,r6
                     009A  1513 	C$part4a.c$96$2$30 ==.
                           1514 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:96: MAC0AH = 0x20;
   0104 75 C2 20      [24] 1515 	mov	_MAC0AH,#0x20
                     009D  1516 	C$part4a.c$97$2$30 ==.
                           1517 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:97: MAC0AL = 0x00;
   0107 75 C1 00      [24] 1518 	mov	_MAC0AL,#0x00
                     00A0  1519 	C$part4a.c$98$2$30 ==.
                           1520 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:98: MAC0BH = results[1]>>8;
   010A 85 18 92      [24] 1521 	mov	_MAC0BH,((_main_results_1_29 + 0x0002) + 1)
                     00A3  1522 	C$part4a.c$99$2$30 ==.
                           1523 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:99: MAC0BL = results[1];
   010D 85 17 91      [24] 1524 	mov	_MAC0BL,(_main_results_1_29 + 0x0002)
                     00A6  1525 	C$part4a.c$101$2$30 ==.
                           1526 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:101: MAC0AH = 0x10;
   0110 75 C2 10      [24] 1527 	mov	_MAC0AH,#0x10
                     00A9  1528 	C$part4a.c$102$2$30 ==.
                           1529 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:102: MAC0AL = 0x00;
   0113 75 C1 00      [24] 1530 	mov	_MAC0AL,#0x00
                     00AC  1531 	C$part4a.c$103$2$30 ==.
                           1532 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:103: MAC0BH = adcValH[2];
   0116 85 0D 92      [24] 1533 	mov	_MAC0BH,(_main_adcValH_1_29 + 0x0002)
                     00AF  1534 	C$part4a.c$104$2$30 ==.
                           1535 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:104: MAC0BL = adcValL[2];
   0119 85 12 91      [24] 1536 	mov	_MAC0BL,(_main_adcValL_1_29 + 0x0002)
                     00B2  1537 	C$part4a.c$106$2$30 ==.
                           1538 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:106: MAC0AH = 0x20;
   011C 75 C2 20      [24] 1539 	mov	_MAC0AH,#0x20
                     00B5  1540 	C$part4a.c$107$2$30 ==.
                           1541 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:107: MAC0AL = 0x00;
   011F 75 C1 00      [24] 1542 	mov	_MAC0AL,#0x00
                     00B8  1543 	C$part4a.c$108$2$30 ==.
                           1544 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:108: MAC0BH = adcValH[1];
   0122 85 0C 92      [24] 1545 	mov	_MAC0BH,(_main_adcValH_1_29 + 0x0001)
                     00BB  1546 	C$part4a.c$109$2$30 ==.
                           1547 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:109: MAC0BL = adcValL[1];
   0125 85 11 91      [24] 1548 	mov	_MAC0BL,(_main_adcValL_1_29 + 0x0001)
                     00BE  1549 	C$part4a.c$111$2$30 ==.
                           1550 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:111: MAC0AH = 0x10;
   0128 75 C2 10      [24] 1551 	mov	_MAC0AH,#0x10
                     00C1  1552 	C$part4a.c$112$2$30 ==.
                           1553 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:112: MAC0AL = 0x00;
   012B 75 C1 00      [24] 1554 	mov	_MAC0AL,#0x00
                     00C4  1555 	C$part4a.c$113$2$30 ==.
                           1556 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:113: MAC0BH = adcValH[0];
   012E 85 0B 92      [24] 1557 	mov	_MAC0BH,_main_adcValH_1_29
                     00C7  1558 	C$part4a.c$114$2$30 ==.
                           1559 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:114: MAC0BL = adcValL[0];
   0131 85 10 91      [24] 1560 	mov	_MAC0BL,_main_adcValL_1_29
                     00CA  1561 	C$part4a.c$116$2$30 ==.
                           1562 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:116: SFRPAGE = MAC0_PAGE;
   0134 75 84 03      [24] 1563 	mov	_SFRPAGE,#0x03
                     00CD  1564 	C$part4a.c$117$2$30 ==.
                           1565 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:117: SFRPAGE = MAC0_PAGE;
   0137 75 84 03      [24] 1566 	mov	_SFRPAGE,#0x03
                     00D0  1567 	C$part4a.c$118$2$30 ==.
                           1568 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:118: SFRPAGE = MAC0_PAGE;
   013A 75 84 03      [24] 1569 	mov	_SFRPAGE,#0x03
                     00D3  1570 	C$part4a.c$119$2$30 ==.
                           1571 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:119: SFRPAGE = MAC0_PAGE;
   013D 75 84 03      [24] 1572 	mov	_SFRPAGE,#0x03
                     00D6  1573 	C$part4a.c$120$2$30 ==.
                           1574 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:120: SFRPAGE = MAC0_PAGE;
   0140 75 84 03      [24] 1575 	mov	_SFRPAGE,#0x03
                     00D9  1576 	C$part4a.c$121$2$30 ==.
                           1577 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:121: SFRPAGE = MAC0_PAGE;
   0143 75 84 03      [24] 1578 	mov	_SFRPAGE,#0x03
                     00DC  1579 	C$part4a.c$122$2$30 ==.
                           1580 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:122: SFRPAGE = MAC0_PAGE;
   0146 75 84 03      [24] 1581 	mov	_SFRPAGE,#0x03
                     00DF  1582 	C$part4a.c$123$2$30 ==.
                           1583 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:123: SFRPAGE = MAC0_PAGE; // Delay with any dummy command
   0149 75 84 03      [24] 1584 	mov	_SFRPAGE,#0x03
                     00E2  1585 	C$part4a.c$125$2$30 ==.
                           1586 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:125: result = (int)MAC0RNDH<<8 | MAC0RNDL; // Read the result from the rounding engine
   014C AD CF         [24] 1587 	mov	r5,_MAC0RNDH
   014E 7C 00         [12] 1588 	mov	r4,#0x00
   0150 AA CE         [24] 1589 	mov	r2,_MAC0RNDL
   0152 7B 00         [12] 1590 	mov	r3,#0x00
   0154 EA            [12] 1591 	mov	a,r2
   0155 4C            [12] 1592 	orl	a,r4
   0156 FE            [12] 1593 	mov	r6,a
   0157 EB            [12] 1594 	mov	a,r3
   0158 4D            [12] 1595 	orl	a,r5
   0159 FF            [12] 1596 	mov	r7,a
                     00F0  1597 	C$part4a.c$127$2$30 ==.
                           1598 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:127: SFRPAGE = DAC0_PAGE; // Output the result through the DAC
   015A 75 84 00      [24] 1599 	mov	_SFRPAGE,#0x00
                     00F3  1600 	C$part4a.c$128$2$30 ==.
                           1601 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:128: DAC0L = result;
   015D 8E D2         [24] 1602 	mov	_DAC0L,r6
                     00F5  1603 	C$part4a.c$129$2$30 ==.
                           1604 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:129: DAC0H = result>>8;
   015F 8F D3         [24] 1605 	mov	_DAC0H,r7
   0161 02 00 B6      [24] 1606 	ljmp	00105$
                     00FA  1607 	C$part4a.c$131$1$29 ==.
                     00FA  1608 	XG$main$0$0 ==.
   0164 22            [24] 1609 	ret
                           1610 ;------------------------------------------------------------
                           1611 ;Allocation info for local variables in function 'SYSCLK_INIT'
                           1612 ;------------------------------------------------------------
                           1613 ;i                         Allocated to registers 
                           1614 ;SFRPAGE_SAVE              Allocated to registers r7 
                           1615 ;------------------------------------------------------------
                     00FB  1616 	G$SYSCLK_INIT$0$0 ==.
                     00FB  1617 	C$part4a.c$137$1$29 ==.
                           1618 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:137: void SYSCLK_INIT(void)
                           1619 ;	-----------------------------------------
                           1620 ;	 function SYSCLK_INIT
                           1621 ;	-----------------------------------------
   0165                    1622 _SYSCLK_INIT:
                     00FB  1623 	C$part4a.c$140$1$29 ==.
                           1624 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:140: char SFRPAGE_SAVE = SFRPAGE;
   0165 AF 84         [24] 1625 	mov	r7,_SFRPAGE
                     00FD  1626 	C$part4a.c$141$1$32 ==.
                           1627 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:141: SFRPAGE = CONFIG_PAGE;
   0167 75 84 0F      [24] 1628 	mov	_SFRPAGE,#0x0F
                     0100  1629 	C$part4a.c$143$1$32 ==.
                           1630 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:143: OSCXCN = 0x67;
   016A 75 8C 67      [24] 1631 	mov	_OSCXCN,#0x67
                     0103  1632 	C$part4a.c$144$1$32 ==.
                           1633 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:144: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
   016D 7D B8         [12] 1634 	mov	r5,#0xB8
   016F 7E 0B         [12] 1635 	mov	r6,#0x0B
   0171                    1636 00107$:
   0171 1D            [12] 1637 	dec	r5
   0172 BD FF 01      [24] 1638 	cjne	r5,#0xFF,00121$
   0175 1E            [12] 1639 	dec	r6
   0176                    1640 00121$:
   0176 ED            [12] 1641 	mov	a,r5
   0177 4E            [12] 1642 	orl	a,r6
   0178 70 F7         [24] 1643 	jnz	00107$
                     0110  1644 	C$part4a.c$145$1$32 ==.
                           1645 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:145: while ((OSCXCN & 0x80) == 0);
   017A                    1646 00102$:
   017A E5 8C         [12] 1647 	mov	a,_OSCXCN
   017C 30 E7 FB      [24] 1648 	jnb	acc.7,00102$
                     0115  1649 	C$part4a.c$146$1$32 ==.
                           1650 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:146: CLKSEL = 0x01;
   017F 75 97 01      [24] 1651 	mov	_CLKSEL,#0x01
                     0118  1652 	C$part4a.c$147$1$32 ==.
                           1653 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:147: OSCICN &= ~0x80;
   0182 AE 8A         [24] 1654 	mov	r6,_OSCICN
   0184 74 7F         [12] 1655 	mov	a,#0x7F
   0186 5E            [12] 1656 	anl	a,r6
   0187 F5 8A         [12] 1657 	mov	_OSCICN,a
                     011F  1658 	C$part4a.c$149$1$32 ==.
                           1659 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:149: SFRPAGE = SFRPAGE_SAVE;
   0189 8F 84         [24] 1660 	mov	_SFRPAGE,r7
                     0121  1661 	C$part4a.c$150$1$32 ==.
                     0121  1662 	XG$SYSCLK_INIT$0$0 ==.
   018B 22            [24] 1663 	ret
                           1664 ;------------------------------------------------------------
                           1665 ;Allocation info for local variables in function 'PORT_INIT'
                           1666 ;------------------------------------------------------------
                     0122  1667 	G$PORT_INIT$0$0 ==.
                     0122  1668 	C$part4a.c$156$1$32 ==.
                           1669 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:156: void PORT_INIT(void)
                           1670 ;	-----------------------------------------
                           1671 ;	 function PORT_INIT
                           1672 ;	-----------------------------------------
   018C                    1673 _PORT_INIT:
                     0122  1674 	C$part4a.c$158$1$34 ==.
                           1675 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:158: SFRPAGE = CONFIG_PAGE;
   018C 75 84 0F      [24] 1676 	mov	_SFRPAGE,#0x0F
                     0125  1677 	C$part4a.c$160$1$34 ==.
                           1678 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:160: WDTCN	= 0xDE;			// Disable watchdog timer.
   018F 75 FF DE      [24] 1679 	mov	_WDTCN,#0xDE
                     0128  1680 	C$part4a.c$161$1$34 ==.
                           1681 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:161: WDTCN	= 0xAD;
   0192 75 FF AD      [24] 1682 	mov	_WDTCN,#0xAD
                     012B  1683 	C$part4a.c$163$1$34 ==.
                           1684 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:163: XBR0 = 0x04;
   0195 75 E1 04      [24] 1685 	mov	_XBR0,#0x04
                     012E  1686 	C$part4a.c$164$1$34 ==.
                           1687 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:164: XBR1 = 0x04; // Enable external interrupt
   0198 75 E2 04      [24] 1688 	mov	_XBR1,#0x04
                     0131  1689 	C$part4a.c$165$1$34 ==.
                           1690 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:165: XBR2 = 0x40; //Enable crossbar
   019B 75 E3 40      [24] 1691 	mov	_XBR2,#0x40
                     0134  1692 	C$part4a.c$167$1$34 ==.
                           1693 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:167: P0MDOUT = 0x01;// Set TX0 pin to push-pull, RX and Push Button to open drain
   019E 75 A4 01      [24] 1694 	mov	_P0MDOUT,#0x01
                     0137  1695 	C$part4a.c$168$1$34 ==.
                           1696 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:168: P0 = 0x06; // Inputs RX and Push Button set to high impedence
   01A1 75 80 06      [24] 1697 	mov	_P0,#0x06
                     013A  1698 	C$part4a.c$170$1$34 ==.
                           1699 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:170: SFRPAGE = LEGACY_PAGE;
   01A4 75 84 00      [24] 1700 	mov	_SFRPAGE,#0x00
                     013D  1701 	C$part4a.c$171$1$34 ==.
                           1702 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:171: IT0 = 0; // /INT0 is edge triggered, falling-edge.
   01A7 C2 88         [12] 1703 	clr	_IT0
                     013F  1704 	C$part4a.c$172$1$34 ==.
                     013F  1705 	XG$PORT_INIT$0$0 ==.
   01A9 22            [24] 1706 	ret
                           1707 ;------------------------------------------------------------
                           1708 ;Allocation info for local variables in function 'UART0_INIT'
                           1709 ;------------------------------------------------------------
                     0140  1710 	G$UART0_INIT$0$0 ==.
                     0140  1711 	C$part4a.c$178$1$34 ==.
                           1712 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:178: void UART0_INIT(void)
                           1713 ;	-----------------------------------------
                           1714 ;	 function UART0_INIT
                           1715 ;	-----------------------------------------
   01AA                    1716 _UART0_INIT:
                     0140  1717 	C$part4a.c$180$1$36 ==.
                           1718 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:180: SFRPAGE = UART0_PAGE;
   01AA 75 84 00      [24] 1719 	mov	_SFRPAGE,#0x00
                     0143  1720 	C$part4a.c$181$1$36 ==.
                           1721 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:181: SCON0	 = 0x50; // Mode 1, 8-bit UART, enable RX
   01AD 75 98 50      [24] 1722 	mov	_SCON0,#0x50
                     0146  1723 	C$part4a.c$182$1$36 ==.
                           1724 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:182: SSTA0	 = 0x10; // SMOD0 = 1
   01B0 75 91 10      [24] 1725 	mov	_SSTA0,#0x10
                     0149  1726 	C$part4a.c$184$1$36 ==.
                           1727 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:184: SFRPAGE = TIMER01_PAGE;
   01B3 75 84 00      [24] 1728 	mov	_SFRPAGE,#0x00
                     014C  1729 	C$part4a.c$185$1$36 ==.
                           1730 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:185: TMOD	&= ~0xF0;
   01B6 AF 89         [24] 1731 	mov	r7,_TMOD
   01B8 74 0F         [12] 1732 	mov	a,#0x0F
   01BA 5F            [12] 1733 	anl	a,r7
   01BB F5 89         [12] 1734 	mov	_TMOD,a
                     0153  1735 	C$part4a.c$186$1$36 ==.
                           1736 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:186: TMOD	|=  0x20;	// Timer1, Mode 2, 8-bit reload
   01BD 43 89 20      [24] 1737 	orl	_TMOD,#0x20
                     0156  1738 	C$part4a.c$187$1$36 ==.
                           1739 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:187: TH1		 = -SYSCLK/(BAUDRATE*16); // Set Timer1 reload baudrate value T1 Hi Byte
   01C0 75 8D F4      [24] 1740 	mov	_TH1,#0xF4
                     0159  1741 	C$part4a.c$188$1$36 ==.
                           1742 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:188: CKCON	|= 0x10; // Timer1 uses SYSCLK as time base
   01C3 43 8E 10      [24] 1743 	orl	_CKCON,#0x10
                     015C  1744 	C$part4a.c$189$1$36 ==.
                           1745 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:189: TL1		 = TH1;
   01C6 85 8D 8B      [24] 1746 	mov	_TL1,_TH1
                     015F  1747 	C$part4a.c$190$1$36 ==.
                           1748 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:190: TR1		 = 1;	// Start Timer1
   01C9 D2 8E         [12] 1749 	setb	_TR1
                     0161  1750 	C$part4a.c$192$1$36 ==.
                           1751 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:192: SFRPAGE = UART0_PAGE;
   01CB 75 84 00      [24] 1752 	mov	_SFRPAGE,#0x00
                     0164  1753 	C$part4a.c$193$1$36 ==.
                           1754 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:193: TI0 = 1; // Indicate TX0 ready
   01CE D2 99         [12] 1755 	setb	_TI0
                     0166  1756 	C$part4a.c$194$1$36 ==.
                     0166  1757 	XG$UART0_INIT$0$0 ==.
   01D0 22            [24] 1758 	ret
                           1759 ;------------------------------------------------------------
                           1760 ;Allocation info for local variables in function 'ADC_INIT'
                           1761 ;------------------------------------------------------------
                     0167  1762 	G$ADC_INIT$0$0 ==.
                     0167  1763 	C$part4a.c$196$1$36 ==.
                           1764 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:196: void ADC_INIT(void)
                           1765 ;	-----------------------------------------
                           1766 ;	 function ADC_INIT
                           1767 ;	-----------------------------------------
   01D1                    1768 _ADC_INIT:
                     0167  1769 	C$part4a.c$198$1$38 ==.
                           1770 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:198: SFRPAGE = ADC0_PAGE;
   01D1 75 84 00      [24] 1771 	mov	_SFRPAGE,#0x00
                     016A  1772 	C$part4a.c$199$1$38 ==.
                           1773 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:199: AMX0CF = 0x00; // All input ports set to single-ended mode
   01D4 75 BA 00      [24] 1774 	mov	_AMX0CF,#0x00
                     016D  1775 	C$part4a.c$200$1$38 ==.
                           1776 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:200: AMX0SL = 0x00; // Select port AIN0.0 for inpit
   01D7 75 BB 00      [24] 1777 	mov	_AMX0SL,#0x00
                     0170  1778 	C$part4a.c$201$1$38 ==.
                           1779 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:201: ADC0CF = 0x20; // ADC clock rate < 2.5MHz, internal gain of 1
   01DA 75 BC 20      [24] 1780 	mov	_ADC0CF,#0x20
                     0173  1781 	C$part4a.c$202$1$38 ==.
                           1782 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:202: ADC0CN = 0X00;
   01DD 75 E8 00      [24] 1783 	mov	_ADC0CN,#0x00
                     0176  1784 	C$part4a.c$203$1$38 ==.
                           1785 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:203: REF0CN = 0X02; // Voltage reference from VREF0 pin; enable bias generator and disable reference buffer
   01E0 75 D1 02      [24] 1786 	mov	_REF0CN,#0x02
                     0179  1787 	C$part4a.c$204$1$38 ==.
                           1788 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:204: AD0EN = 1; //Enable ADC
   01E3 D2 EF         [12] 1789 	setb	_AD0EN
                     017B  1790 	C$part4a.c$205$1$38 ==.
                     017B  1791 	XG$ADC_INIT$0$0 ==.
   01E5 22            [24] 1792 	ret
                           1793 ;------------------------------------------------------------
                           1794 ;Allocation info for local variables in function 'DAC_INIT'
                           1795 ;------------------------------------------------------------
                     017C  1796 	G$DAC_INIT$0$0 ==.
                     017C  1797 	C$part4a.c$207$1$38 ==.
                           1798 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:207: void DAC_INIT(void)
                           1799 ;	-----------------------------------------
                           1800 ;	 function DAC_INIT
                           1801 ;	-----------------------------------------
   01E6                    1802 _DAC_INIT:
                     017C  1803 	C$part4a.c$209$1$40 ==.
                           1804 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:209: SFRPAGE = DAC0_PAGE;
   01E6 75 84 00      [24] 1805 	mov	_SFRPAGE,#0x00
                     017F  1806 	C$part4a.c$210$1$40 ==.
                           1807 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:210: DAC0CN = 0x80;
   01E9 75 D4 80      [24] 1808 	mov	_DAC0CN,#0x80
                     0182  1809 	C$part4a.c$211$1$40 ==.
                     0182  1810 	XG$DAC_INIT$0$0 ==.
   01EC 22            [24] 1811 	ret
                           1812 ;------------------------------------------------------------
                           1813 ;Allocation info for local variables in function 'INTERRUPT_INIT'
                           1814 ;------------------------------------------------------------
                     0183  1815 	G$INTERRUPT_INIT$0$0 ==.
                     0183  1816 	C$part4a.c$213$1$40 ==.
                           1817 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:213: void INTERRUPT_INIT(void) {
                           1818 ;	-----------------------------------------
                           1819 ;	 function INTERRUPT_INIT
                           1820 ;	-----------------------------------------
   01ED                    1821 _INTERRUPT_INIT:
                     0183  1822 	C$part4a.c$214$1$42 ==.
                           1823 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:214: EA = 1;
   01ED D2 AF         [12] 1824 	setb	_EA
                     0185  1825 	C$part4a.c$215$1$42 ==.
                           1826 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:215: EX0 = 1; //External interrupts
   01EF D2 A8         [12] 1827 	setb	_EX0
                     0187  1828 	C$part4a.c$216$1$42 ==.
                     0187  1829 	XG$INTERRUPT_INIT$0$0 ==.
   01F1 22            [24] 1830 	ret
                           1831 ;------------------------------------------------------------
                           1832 ;Allocation info for local variables in function 'TIMER_INIT'
                           1833 ;------------------------------------------------------------
                     0188  1834 	G$TIMER_INIT$0$0 ==.
                     0188  1835 	C$part4a.c$218$1$42 ==.
                           1836 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:218: void TIMER_INIT(void) {
                           1837 ;	-----------------------------------------
                           1838 ;	 function TIMER_INIT
                           1839 ;	-----------------------------------------
   01F2                    1840 _TIMER_INIT:
                     0188  1841 	C$part4a.c$219$1$44 ==.
                           1842 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:219: TMOD = 0x01; // Timer0 in 16-bit mode
   01F2 75 89 01      [24] 1843 	mov	_TMOD,#0x01
                     018B  1844 	C$part4a.c$220$1$44 ==.
                           1845 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:220: CKCON = 0x08; // Timer0 uses sysclk
   01F5 75 8E 08      [24] 1846 	mov	_CKCON,#0x08
                     018E  1847 	C$part4a.c$221$1$44 ==.
                           1848 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:221: TR0 = 1; // Enable Timer0
   01F8 D2 8C         [12] 1849 	setb	_TR0
                     0190  1850 	C$part4a.c$222$1$44 ==.
                     0190  1851 	XG$TIMER_INIT$0$0 ==.
   01FA 22            [24] 1852 	ret
                           1853 ;------------------------------------------------------------
                           1854 ;Allocation info for local variables in function 'MAC_INIT'
                           1855 ;------------------------------------------------------------
                     0191  1856 	G$MAC_INIT$0$0 ==.
                     0191  1857 	C$part4a.c$224$1$44 ==.
                           1858 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:224: void MAC_INIT(void) {
                           1859 ;	-----------------------------------------
                           1860 ;	 function MAC_INIT
                           1861 ;	-----------------------------------------
   01FB                    1862 _MAC_INIT:
                     0191  1863 	C$part4a.c$225$1$46 ==.
                           1864 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:225: SFRPAGE = MAC0_PAGE;
   01FB 75 84 03      [24] 1865 	mov	_SFRPAGE,#0x03
                     0194  1866 	C$part4a.c$226$1$46 ==.
                           1867 ;	C:\Users\Justin\Documents\MPS\git\final\part4a.c:226: MAC0CF = 0x1A; //MAC mode, fractional mode, rounding will not saturate, reset MAC, shift right
   01FE 75 C3 1A      [24] 1868 	mov	_MAC0CF,#0x1A
                     0197  1869 	C$part4a.c$227$1$46 ==.
                     0197  1870 	XG$MAC_INIT$0$0 ==.
   0201 22            [24] 1871 	ret
                           1872 	.area CSEG    (CODE)
                           1873 	.area CONST   (CODE)
                           1874 	.area XINIT   (CODE)
                           1875 	.area CABS    (ABS,CODE)
