                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (May 11 2013) (MINGW32)
                              4 ; This file was generated Mon Dec 07 20:29:19 2015
                              5 ;--------------------------------------------------------
                              6 	.module part3
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _int0_interrupt
                             13 	.globl _P7_7
                             14 	.globl _P7_6
                             15 	.globl _P7_5
                             16 	.globl _P7_4
                             17 	.globl _P7_3
                             18 	.globl _P7_2
                             19 	.globl _P7_1
                             20 	.globl _P7_0
                             21 	.globl _SPIF
                             22 	.globl _WCOL
                             23 	.globl _MODF
                             24 	.globl _RXOVRN
                             25 	.globl _NSSMD1
                             26 	.globl _NSSMD0
                             27 	.globl _TXBMT
                             28 	.globl _SPIEN
                             29 	.globl _P6_7
                             30 	.globl _P6_6
                             31 	.globl _P6_5
                             32 	.globl _P6_4
                             33 	.globl _P6_3
                             34 	.globl _P6_2
                             35 	.globl _P6_1
                             36 	.globl _P6_0
                             37 	.globl _AD2EN
                             38 	.globl _AD2TM
                             39 	.globl _AD2INT
                             40 	.globl _AD2BUSY
                             41 	.globl _AD2CM2
                             42 	.globl _AD2CM1
                             43 	.globl _AD2CM0
                             44 	.globl _AD2WINT
                             45 	.globl _AD0EN
                             46 	.globl _AD0TM
                             47 	.globl _AD0INT
                             48 	.globl _AD0BUSY
                             49 	.globl _AD0CM1
                             50 	.globl _AD0CM0
                             51 	.globl _AD0WINT
                             52 	.globl _AD0LJST
                             53 	.globl _P5_7
                             54 	.globl _P5_6
                             55 	.globl _P5_5
                             56 	.globl _P5_4
                             57 	.globl _P5_3
                             58 	.globl _P5_2
                             59 	.globl _P5_1
                             60 	.globl _P5_0
                             61 	.globl _CF
                             62 	.globl _CR
                             63 	.globl _CCF5
                             64 	.globl _CCF4
                             65 	.globl _CCF3
                             66 	.globl _CCF2
                             67 	.globl _CCF1
                             68 	.globl _CCF0
                             69 	.globl _CY
                             70 	.globl _AC
                             71 	.globl _F0
                             72 	.globl _RS1
                             73 	.globl _RS0
                             74 	.globl _OV
                             75 	.globl _F1
                             76 	.globl _P
                             77 	.globl _P4_7
                             78 	.globl _P4_6
                             79 	.globl _P4_5
                             80 	.globl _P4_4
                             81 	.globl _P4_3
                             82 	.globl _P4_2
                             83 	.globl _P4_1
                             84 	.globl _P4_0
                             85 	.globl _TF4
                             86 	.globl _EXF4
                             87 	.globl _EXEN4
                             88 	.globl _TR4
                             89 	.globl _CT4
                             90 	.globl _CPRL4
                             91 	.globl _TF3
                             92 	.globl _EXF3
                             93 	.globl _EXEN3
                             94 	.globl _TR3
                             95 	.globl _CT3
                             96 	.globl _CPRL3
                             97 	.globl _TF2
                             98 	.globl _EXF2
                             99 	.globl _EXEN2
                            100 	.globl _TR2
                            101 	.globl _CT2
                            102 	.globl _CPRL2
                            103 	.globl _MAC0HO
                            104 	.globl _MAC0Z
                            105 	.globl _MAC0SO
                            106 	.globl _MAC0N
                            107 	.globl _BUSY
                            108 	.globl _ENSMB
                            109 	.globl _STA
                            110 	.globl _STO
                            111 	.globl _SI
                            112 	.globl _AA
                            113 	.globl _SMBFTE
                            114 	.globl _SMBTOE
                            115 	.globl _PT2
                            116 	.globl _PS
                            117 	.globl _PS0
                            118 	.globl _PT1
                            119 	.globl _PX1
                            120 	.globl _PT0
                            121 	.globl _PX0
                            122 	.globl _P3_7
                            123 	.globl _P3_6
                            124 	.globl _P3_5
                            125 	.globl _P3_4
                            126 	.globl _P3_3
                            127 	.globl _P3_2
                            128 	.globl _P3_1
                            129 	.globl _P3_0
                            130 	.globl _EA
                            131 	.globl _ET2
                            132 	.globl _ES
                            133 	.globl _ES0
                            134 	.globl _ET1
                            135 	.globl _EX1
                            136 	.globl _ET0
                            137 	.globl _EX0
                            138 	.globl _P2_7
                            139 	.globl _P2_6
                            140 	.globl _P2_5
                            141 	.globl _P2_4
                            142 	.globl _P2_3
                            143 	.globl _P2_2
                            144 	.globl _P2_1
                            145 	.globl _P2_0
                            146 	.globl _S1MODE
                            147 	.globl _MCE1
                            148 	.globl _REN1
                            149 	.globl _TB81
                            150 	.globl _RB81
                            151 	.globl _TI1
                            152 	.globl _RI1
                            153 	.globl _SM00
                            154 	.globl _SM10
                            155 	.globl _SM20
                            156 	.globl _REN
                            157 	.globl _REN0
                            158 	.globl _TB80
                            159 	.globl _RB80
                            160 	.globl _TI
                            161 	.globl _TI0
                            162 	.globl _RI
                            163 	.globl _RI0
                            164 	.globl _P1_7
                            165 	.globl _P1_6
                            166 	.globl _P1_5
                            167 	.globl _P1_4
                            168 	.globl _P1_3
                            169 	.globl _P1_2
                            170 	.globl _P1_1
                            171 	.globl _P1_0
                            172 	.globl _FLHBUSY
                            173 	.globl _CP1EN
                            174 	.globl _CP1OUT
                            175 	.globl _CP1RIF
                            176 	.globl _CP1FIF
                            177 	.globl _CP1HYP1
                            178 	.globl _CP1HYP0
                            179 	.globl _CP1HYN1
                            180 	.globl _CP1HYN0
                            181 	.globl _CP0EN
                            182 	.globl _CP0OUT
                            183 	.globl _CP0RIF
                            184 	.globl _CP0FIF
                            185 	.globl _CP0HYP1
                            186 	.globl _CP0HYP0
                            187 	.globl _CP0HYN1
                            188 	.globl _CP0HYN0
                            189 	.globl _TF1
                            190 	.globl _TR1
                            191 	.globl _TF0
                            192 	.globl _TR0
                            193 	.globl _IE1
                            194 	.globl _IT1
                            195 	.globl _IE0
                            196 	.globl _IT0
                            197 	.globl _P0_7
                            198 	.globl _P0_6
                            199 	.globl _P0_5
                            200 	.globl _P0_4
                            201 	.globl _P0_3
                            202 	.globl _P0_2
                            203 	.globl _P0_1
                            204 	.globl _P0_0
                            205 	.globl _MAC0RND
                            206 	.globl _MAC0ACC
                            207 	.globl _MAC0A
                            208 	.globl _RCAP4
                            209 	.globl _TMR4
                            210 	.globl _DAC1
                            211 	.globl _RCAP3
                            212 	.globl _TMR3
                            213 	.globl _PCA0CP5
                            214 	.globl _PCA0CP4
                            215 	.globl _PCA0CP3
                            216 	.globl _PCA0CP2
                            217 	.globl _PCA0CP1
                            218 	.globl _PCA0CP0
                            219 	.globl _PCA0
                            220 	.globl _DAC0
                            221 	.globl _ADC0LT
                            222 	.globl _ADC0GT
                            223 	.globl _ADC0
                            224 	.globl _RCAP2
                            225 	.globl _TMR2
                            226 	.globl _TMR1
                            227 	.globl _TMR0
                            228 	.globl _P7
                            229 	.globl _P6
                            230 	.globl _XBR2
                            231 	.globl _XBR1
                            232 	.globl _XBR0
                            233 	.globl _P5
                            234 	.globl _P4
                            235 	.globl _FLACL
                            236 	.globl _P1MDIN
                            237 	.globl _P3MDOUT
                            238 	.globl _P2MDOUT
                            239 	.globl _P1MDOUT
                            240 	.globl _P0MDOUT
                            241 	.globl _CCH0LC
                            242 	.globl _CCH0TN
                            243 	.globl _CCH0CN
                            244 	.globl _P7MDOUT
                            245 	.globl _P6MDOUT
                            246 	.globl _P5MDOUT
                            247 	.globl _P4MDOUT
                            248 	.globl _CCH0MA
                            249 	.globl _CLKSEL
                            250 	.globl _SFRPGCN
                            251 	.globl _PLL0FLT
                            252 	.globl _PLL0MUL
                            253 	.globl _PLL0DIV
                            254 	.globl _OSCXCN
                            255 	.globl _OSCICL
                            256 	.globl _OSCICN
                            257 	.globl _PLL0CN
                            258 	.globl _FLSTAT
                            259 	.globl _MAC0RNDH
                            260 	.globl _MAC0RNDL
                            261 	.globl _MAC0CF
                            262 	.globl _MAC0AH
                            263 	.globl _MAC0AL
                            264 	.globl _MAC0STA
                            265 	.globl _MAC0OVR
                            266 	.globl _MAC0ACC3
                            267 	.globl _MAC0ACC2
                            268 	.globl _MAC0ACC1
                            269 	.globl _MAC0ACC0
                            270 	.globl _MAC0BH
                            271 	.globl _MAC0BL
                            272 	.globl _ADC2CN
                            273 	.globl _TMR4H
                            274 	.globl _TMR4L
                            275 	.globl _RCAP4H
                            276 	.globl _RCAP4L
                            277 	.globl _TMR4CF
                            278 	.globl _TMR4CN
                            279 	.globl _ADC2LT
                            280 	.globl _ADC2GT
                            281 	.globl _ADC2
                            282 	.globl _ADC2CF
                            283 	.globl _AMX2SL
                            284 	.globl _AMX2CF
                            285 	.globl _CPT1MD
                            286 	.globl _CPT1CN
                            287 	.globl _DAC1CN
                            288 	.globl _DAC1H
                            289 	.globl _DAC1L
                            290 	.globl _TMR3H
                            291 	.globl _TMR3L
                            292 	.globl _RCAP3H
                            293 	.globl _RCAP3L
                            294 	.globl _TMR3CF
                            295 	.globl _TMR3CN
                            296 	.globl _SBUF1
                            297 	.globl _SCON1
                            298 	.globl _CPT0MD
                            299 	.globl _CPT0CN
                            300 	.globl _PCA0CPH1
                            301 	.globl _PCA0CPL1
                            302 	.globl _PCA0CPH0
                            303 	.globl _PCA0CPL0
                            304 	.globl _PCA0H
                            305 	.globl _PCA0L
                            306 	.globl _SPI0CN
                            307 	.globl _RSTSRC
                            308 	.globl _PCA0CPH4
                            309 	.globl _PCA0CPL4
                            310 	.globl _PCA0CPH3
                            311 	.globl _PCA0CPL3
                            312 	.globl _PCA0CPH2
                            313 	.globl _PCA0CPL2
                            314 	.globl _ADC0CN
                            315 	.globl _PCA0CPH5
                            316 	.globl _PCA0CPL5
                            317 	.globl _PCA0CPM5
                            318 	.globl _PCA0CPM4
                            319 	.globl _PCA0CPM3
                            320 	.globl _PCA0CPM2
                            321 	.globl _PCA0CPM1
                            322 	.globl _PCA0CPM0
                            323 	.globl _PCA0MD
                            324 	.globl _PCA0CN
                            325 	.globl _DAC0CN
                            326 	.globl _DAC0H
                            327 	.globl _DAC0L
                            328 	.globl _REF0CN
                            329 	.globl _SMB0CR
                            330 	.globl _TH2
                            331 	.globl _TMR2H
                            332 	.globl _TL2
                            333 	.globl _TMR2L
                            334 	.globl _RCAP2H
                            335 	.globl _RCAP2L
                            336 	.globl _TMR2CF
                            337 	.globl _TMR2CN
                            338 	.globl _ADC0LTH
                            339 	.globl _ADC0LTL
                            340 	.globl _ADC0GTH
                            341 	.globl _ADC0GTL
                            342 	.globl _SMB0ADR
                            343 	.globl _SMB0DAT
                            344 	.globl _SMB0STA
                            345 	.globl _SMB0CN
                            346 	.globl _ADC0H
                            347 	.globl _ADC0L
                            348 	.globl _ADC0CF
                            349 	.globl _AMX0SL
                            350 	.globl _AMX0CF
                            351 	.globl _SADEN0
                            352 	.globl _FLSCL
                            353 	.globl _SADDR0
                            354 	.globl _EMI0CF
                            355 	.globl __XPAGE
                            356 	.globl _EMI0CN
                            357 	.globl _EMI0TC
                            358 	.globl _SPI0CKR
                            359 	.globl _SPI0DAT
                            360 	.globl _SPI0CFG
                            361 	.globl _SBUF
                            362 	.globl _SBUF0
                            363 	.globl _SCON
                            364 	.globl _SCON0
                            365 	.globl _SSTA0
                            366 	.globl _PSCTL
                            367 	.globl _CKCON
                            368 	.globl _TH1
                            369 	.globl _TH0
                            370 	.globl _TL1
                            371 	.globl _TL0
                            372 	.globl _TMOD
                            373 	.globl _TCON
                            374 	.globl _WDTCN
                            375 	.globl _EIP2
                            376 	.globl _EIP1
                            377 	.globl _B
                            378 	.globl _EIE2
                            379 	.globl _EIE1
                            380 	.globl _ACC
                            381 	.globl _PSW
                            382 	.globl _IP
                            383 	.globl _PSBANK
                            384 	.globl _P3
                            385 	.globl _IE
                            386 	.globl _P2
                            387 	.globl _P1
                            388 	.globl _PCON
                            389 	.globl _SFRLAST
                            390 	.globl _SFRNEXT
                            391 	.globl _SFRPAGE
                            392 	.globl _DPH
                            393 	.globl _DPL
                            394 	.globl _SP
                            395 	.globl _P0
                            396 	.globl _dig_val
                            397 	.globl _start_conversion
                            398 	.globl _putchar
                            399 	.globl _getchar
                            400 	.globl _main
                            401 	.globl _SYSCLK_INIT
                            402 	.globl _PORT_INIT
                            403 	.globl _UART0_INIT
                            404 	.globl _ADC_INIT
                            405 	.globl _DAC_INIT
                            406 	.globl _INTERRUPT_INIT
                            407 	.globl _TIMER_INIT
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
                     0003  1199 Lpart3.main$analogval$1$28==.
   000B                    1200 _main_analogval_1_28:
   000B                    1201 	.ds 2
                     0005  1202 Lpart3.main$accum$1$28==.
   000D                    1203 _main_accum_1_28:
   000D                    1204 	.ds 32
                           1205 ;--------------------------------------------------------
                           1206 ; overlayable items in internal ram 
                           1207 ;--------------------------------------------------------
                           1208 	.area	OSEG    (OVR,DATA)
                           1209 	.area	OSEG    (OVR,DATA)
                           1210 	.area	OSEG    (OVR,DATA)
                           1211 	.area	OSEG    (OVR,DATA)
                           1212 	.area	OSEG    (OVR,DATA)
                           1213 ;--------------------------------------------------------
                           1214 ; Stack segment in internal ram 
                           1215 ;--------------------------------------------------------
                           1216 	.area	SSEG	(DATA)
   002E                    1217 __start__stack:
   002E                    1218 	.ds	1
                           1219 
                           1220 ;--------------------------------------------------------
                           1221 ; indirectly addressable internal ram data
                           1222 ;--------------------------------------------------------
                           1223 	.area ISEG    (DATA)
                           1224 ;--------------------------------------------------------
                           1225 ; absolute internal ram data
                           1226 ;--------------------------------------------------------
                           1227 	.area IABS    (ABS,DATA)
                           1228 	.area IABS    (ABS,DATA)
                           1229 ;--------------------------------------------------------
                           1230 ; bit data
                           1231 ;--------------------------------------------------------
                           1232 	.area BSEG    (BIT)
                           1233 ;--------------------------------------------------------
                           1234 ; paged external ram data
                           1235 ;--------------------------------------------------------
                           1236 	.area PSEG    (PAG,XDATA)
                           1237 ;--------------------------------------------------------
                           1238 ; external ram data
                           1239 ;--------------------------------------------------------
                           1240 	.area XSEG    (XDATA)
                           1241 ;--------------------------------------------------------
                           1242 ; absolute external ram data
                           1243 ;--------------------------------------------------------
                           1244 	.area XABS    (ABS,XDATA)
                           1245 ;--------------------------------------------------------
                           1246 ; external initialized ram data
                           1247 ;--------------------------------------------------------
                           1248 	.area XISEG   (XDATA)
                           1249 	.area HOME    (CODE)
                           1250 	.area GSINIT0 (CODE)
                           1251 	.area GSINIT1 (CODE)
                           1252 	.area GSINIT2 (CODE)
                           1253 	.area GSINIT3 (CODE)
                           1254 	.area GSINIT4 (CODE)
                           1255 	.area GSINIT5 (CODE)
                           1256 	.area GSINIT  (CODE)
                           1257 	.area GSFINAL (CODE)
                           1258 	.area CSEG    (CODE)
                           1259 ;--------------------------------------------------------
                           1260 ; interrupt vector 
                           1261 ;--------------------------------------------------------
                           1262 	.area HOME    (CODE)
   0000                    1263 __interrupt_vect:
   0000 02 00 09      [24] 1264 	ljmp	__sdcc_gsinit_startup
   0003 02 01 04      [24] 1265 	ljmp	_int0_interrupt
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
                     0000  1279 	C$part3.c$34$1$45 ==.
                           1280 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:34: char start_conversion = 0; // Flag to indicate when to start the ADC
   0062 75 08 00      [24] 1281 	mov	_start_conversion,#0x00
                     0003  1282 	C$part3.c$35$1$45 ==.
                           1283 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:35: unsigned int dig_val = 0;
   0065 E4            [12] 1284 	clr	a
   0066 F5 09         [12] 1285 	mov	_dig_val,a
   0068 F5 0A         [12] 1286 	mov	(_dig_val + 1),a
                           1287 	.area GSFINAL (CODE)
   006A 02 00 06      [24] 1288 	ljmp	__sdcc_program_startup
                           1289 ;--------------------------------------------------------
                           1290 ; Home
                           1291 ;--------------------------------------------------------
                           1292 	.area HOME    (CODE)
                           1293 	.area HOME    (CODE)
   0006                    1294 __sdcc_program_startup:
   0006 02 00 80      [24] 1295 	ljmp	_main
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
   006D                    1312 _putchar:
                     0007  1313 	ar7 = 0x07
                     0006  1314 	ar6 = 0x06
                     0005  1315 	ar5 = 0x05
                     0004  1316 	ar4 = 0x04
                     0003  1317 	ar3 = 0x03
                     0002  1318 	ar2 = 0x02
                     0001  1319 	ar1 = 0x01
                     0000  1320 	ar0 = 0x00
   006D AF 82         [24] 1321 	mov	r7,dpl
                     0002  1322 	C$putget.h$20$1$16 ==.
                           1323 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:20: while(!TI0); 
   006F                    1324 00101$:
                     0002  1325 	C$putget.h$21$1$16 ==.
                           1326 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:21: TI0=0;
   006F 10 99 02      [24] 1327 	jbc	_TI0,00112$
   0072 80 FB         [24] 1328 	sjmp	00101$
   0074                    1329 00112$:
                     0007  1330 	C$putget.h$22$1$16 ==.
                           1331 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:22: SBUF0 = c;
   0074 8F 99         [24] 1332 	mov	_SBUF0,r7
                     0009  1333 	C$putget.h$23$1$16 ==.
                     0009  1334 	XG$putchar$0$0 ==.
   0076 22            [24] 1335 	ret
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
   0077                    1347 _getchar:
                     000A  1348 	C$putget.h$31$1$18 ==.
                           1349 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:31: while(!RI0);
   0077                    1350 00101$:
                     000A  1351 	C$putget.h$32$1$18 ==.
                           1352 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:32: RI0 =0;
   0077 10 98 02      [24] 1353 	jbc	_RI0,00112$
   007A 80 FB         [24] 1354 	sjmp	00101$
   007C                    1355 00112$:
                     000F  1356 	C$putget.h$33$1$18 ==.
                           1357 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:33: c = SBUF0;
   007C 85 99 82      [24] 1358 	mov	dpl,_SBUF0
                     0012  1359 	C$putget.h$35$1$18 ==.
                           1360 ;	C:\Users\Justin\Documents\MPS\git\final\/putget.h:35: return c;
                     0012  1361 	C$putget.h$36$1$18 ==.
                     0012  1362 	XG$getchar$0$0 ==.
   007F 22            [24] 1363 	ret
                           1364 ;------------------------------------------------------------
                           1365 ;Allocation info for local variables in function 'main'
                           1366 ;------------------------------------------------------------
                           1367 ;analogval                 Allocated with name '_main_analogval_1_28'
                           1368 ;analoghi                  Allocated to registers 
                           1369 ;analoglow                 Allocated to registers 
                           1370 ;VREF                      Allocated to registers 
                           1371 ;result                    Allocated with name '_main_result_1_28'
                           1372 ;result_high               Allocated to registers 
                           1373 ;result_low                Allocated to registers 
                           1374 ;samples                   Allocated to registers 
                           1375 ;accum                     Allocated with name '_main_accum_1_28'
                           1376 ;i                         Allocated with name '_main_i_1_28'
                           1377 ;sum                       Allocated to registers 
                           1378 ;avg                       Allocated with name '_main_avg_1_28'
                           1379 ;result_dec1               Allocated with name '_main_result_dec1_1_28'
                           1380 ;result_dec2               Allocated with name '_main_result_dec2_1_28'
                           1381 ;------------------------------------------------------------
                     0013  1382 	G$main$0$0 ==.
                     0013  1383 	C$part3.c$40$1$18 ==.
                           1384 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:40: void main(void)
                           1385 ;	-----------------------------------------
                           1386 ;	 function main
                           1387 ;	-----------------------------------------
   0080                    1388 _main:
                     0013  1389 	C$part3.c$49$1$18 ==.
                           1390 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:49: short int accum[16] = {0}; // Still compute the average
   0080 E4            [12] 1391 	clr	a
   0081 F5 0D         [12] 1392 	mov	(_main_accum_1_28 + 0),a
   0083 F5 0E         [12] 1393 	mov	(_main_accum_1_28 + 1),a
   0085 F5 0F         [12] 1394 	mov	((_main_accum_1_28 + 0x0002) + 0),a
   0087 F5 10         [12] 1395 	mov	((_main_accum_1_28 + 0x0002) + 1),a
   0089 F5 11         [12] 1396 	mov	((_main_accum_1_28 + 0x0004) + 0),a
   008B F5 12         [12] 1397 	mov	((_main_accum_1_28 + 0x0004) + 1),a
   008D F5 13         [12] 1398 	mov	((_main_accum_1_28 + 0x0006) + 0),a
   008F F5 14         [12] 1399 	mov	((_main_accum_1_28 + 0x0006) + 1),a
   0091 E4            [12] 1400 	clr	a
   0092 F5 15         [12] 1401 	mov	((_main_accum_1_28 + 0x0008) + 0),a
   0094 F5 16         [12] 1402 	mov	((_main_accum_1_28 + 0x0008) + 1),a
   0096 F5 17         [12] 1403 	mov	((_main_accum_1_28 + 0x000a) + 0),a
   0098 F5 18         [12] 1404 	mov	((_main_accum_1_28 + 0x000a) + 1),a
   009A F5 19         [12] 1405 	mov	((_main_accum_1_28 + 0x000c) + 0),a
   009C F5 1A         [12] 1406 	mov	((_main_accum_1_28 + 0x000c) + 1),a
   009E F5 1B         [12] 1407 	mov	((_main_accum_1_28 + 0x000e) + 0),a
   00A0 F5 1C         [12] 1408 	mov	((_main_accum_1_28 + 0x000e) + 1),a
   00A2 E4            [12] 1409 	clr	a
   00A3 F5 1D         [12] 1410 	mov	((_main_accum_1_28 + 0x0010) + 0),a
   00A5 F5 1E         [12] 1411 	mov	((_main_accum_1_28 + 0x0010) + 1),a
   00A7 F5 1F         [12] 1412 	mov	((_main_accum_1_28 + 0x0012) + 0),a
   00A9 F5 20         [12] 1413 	mov	((_main_accum_1_28 + 0x0012) + 1),a
   00AB F5 21         [12] 1414 	mov	((_main_accum_1_28 + 0x0014) + 0),a
   00AD F5 22         [12] 1415 	mov	((_main_accum_1_28 + 0x0014) + 1),a
   00AF F5 23         [12] 1416 	mov	((_main_accum_1_28 + 0x0016) + 0),a
   00B1 F5 24         [12] 1417 	mov	((_main_accum_1_28 + 0x0016) + 1),a
   00B3 E4            [12] 1418 	clr	a
   00B4 F5 25         [12] 1419 	mov	((_main_accum_1_28 + 0x0018) + 0),a
   00B6 F5 26         [12] 1420 	mov	((_main_accum_1_28 + 0x0018) + 1),a
   00B8 F5 27         [12] 1421 	mov	((_main_accum_1_28 + 0x001a) + 0),a
   00BA F5 28         [12] 1422 	mov	((_main_accum_1_28 + 0x001a) + 1),a
   00BC F5 29         [12] 1423 	mov	((_main_accum_1_28 + 0x001c) + 0),a
   00BE F5 2A         [12] 1424 	mov	((_main_accum_1_28 + 0x001c) + 1),a
   00C0 F5 2B         [12] 1425 	mov	((_main_accum_1_28 + 0x001e) + 0),a
   00C2 F5 2C         [12] 1426 	mov	((_main_accum_1_28 + 0x001e) + 1),a
                     0057  1427 	C$part3.c$55$1$28 ==.
                           1428 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:55: analoglow = (char *) &analogval;
                     0057  1429 	C$part3.c$56$1$28 ==.
                           1430 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:56: analoghi = analoglow + 1;
                     0057  1431 	C$part3.c$58$1$28 ==.
                           1432 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:58: WDTCN = 0xDE; // Disable the watchdog timer
   00C4 75 FF DE      [24] 1433 	mov	_WDTCN,#0xDE
                     005A  1434 	C$part3.c$59$1$28 ==.
                           1435 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:59: WDTCN = 0xAD;
   00C7 75 FF AD      [24] 1436 	mov	_WDTCN,#0xAD
                     005D  1437 	C$part3.c$61$1$28 ==.
                           1438 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:61: PORT_INIT(); // Initialize the Crossbar and GPIO
   00CA 12 01 2F      [24] 1439 	lcall	_PORT_INIT
                     0060  1440 	C$part3.c$62$1$28 ==.
                           1441 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:62: SYSCLK_INIT(); // Initialize the oscillator
   00CD 12 01 08      [24] 1442 	lcall	_SYSCLK_INIT
                     0063  1443 	C$part3.c$63$1$28 ==.
                           1444 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:63: UART0_INIT(); // Initialize UART0
   00D0 12 01 4D      [24] 1445 	lcall	_UART0_INIT
                     0066  1446 	C$part3.c$64$1$28 ==.
                           1447 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:64: ADC_INIT(); // Initialize ADC0
   00D3 12 01 78      [24] 1448 	lcall	_ADC_INIT
                     0069  1449 	C$part3.c$65$1$28 ==.
                           1450 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:65: INTERRUPT_INIT();
   00D6 12 01 96      [24] 1451 	lcall	_INTERRUPT_INIT
                     006C  1452 	C$part3.c$66$1$28 ==.
                           1453 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:66: DAC_INIT();
   00D9 12 01 8F      [24] 1454 	lcall	_DAC_INIT
                     006F  1455 	C$part3.c$70$1$28 ==.
                           1456 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:70: while(1)
   00DC                    1457 00105$:
                     006F  1458 	C$part3.c$73$2$29 ==.
                           1459 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:73: SFRPAGE = ADC0_PAGE;
   00DC 75 84 00      [24] 1460 	mov	_SFRPAGE,#0x00
                     0072  1461 	C$part3.c$74$2$29 ==.
                           1462 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:74: AD0INT = 0; // Clear the "conversion done" flag
   00DF C2 ED         [12] 1463 	clr	_AD0INT
                     0074  1464 	C$part3.c$75$2$29 ==.
                           1465 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:75: AD0BUSY = 1; // Start A/D Conversion
   00E1 D2 EC         [12] 1466 	setb	_AD0BUSY
                     0076  1467 	C$part3.c$76$2$29 ==.
                           1468 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:76: while (AD0INT == 0); // Wait for the conversion to finish
   00E3                    1469 00101$:
   00E3 30 ED FD      [24] 1470 	jnb	_AD0INT,00101$
                     0079  1471 	C$part3.c$77$2$29 ==.
                           1472 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:77: *analoglow = ADC0L; // Read the low byte
   00E6 85 BE 0B      [24] 1473 	mov	_main_analogval_1_28,_ADC0L
                     007C  1474 	C$part3.c$78$2$29 ==.
                           1475 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:78: *analoghi = ADC0H; // Read the high byte
   00E9 90 00 0C      [24] 1476 	mov	dptr,#(_main_analogval_1_28 + 0x0001)
   00EC 75 F0 40      [24] 1477 	mov	b,#0x40
   00EF E5 BF         [12] 1478 	mov	a,_ADC0H
   00F1 12 01 A4      [24] 1479 	lcall	__gptrput
                     0087  1480 	C$part3.c$80$2$29 ==.
                           1481 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:80: SFRPAGE = DAC0_PAGE; // Output the digital value through the DAC
   00F4 75 84 00      [24] 1482 	mov	_SFRPAGE,#0x00
                     008A  1483 	C$part3.c$81$2$29 ==.
                           1484 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:81: DAC0L = analogval << 0; //digval;
   00F7 AF 0B         [24] 1485 	mov	r7,_main_analogval_1_28
   00F9 8F D2         [24] 1486 	mov	_DAC0L,r7
                     008E  1487 	C$part3.c$82$2$29 ==.
                           1488 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:82: DAC0H = analogval >> 8; //digval >> 8;
   00FB 85 0C D3      [24] 1489 	mov	_DAC0H,(_main_analogval_1_28 + 1)
                     0091  1490 	C$part3.c$84$2$29 ==.
                           1491 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:84: SFRPAGE = UART0_PAGE;
   00FE 75 84 00      [24] 1492 	mov	_SFRPAGE,#0x00
   0101 80 D9         [24] 1493 	sjmp	00105$
                     0096  1494 	C$part3.c$94$1$28 ==.
                     0096  1495 	XG$main$0$0 ==.
   0103 22            [24] 1496 	ret
                           1497 ;------------------------------------------------------------
                           1498 ;Allocation info for local variables in function 'int0_interrupt'
                           1499 ;------------------------------------------------------------
                     0097  1500 	G$int0_interrupt$0$0 ==.
                     0097  1501 	C$part3.c$97$1$28 ==.
                           1502 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:97: void int0_interrupt(void) __interrupt 0
                           1503 ;	-----------------------------------------
                           1504 ;	 function int0_interrupt
                           1505 ;	-----------------------------------------
   0104                    1506 _int0_interrupt:
                     0097  1507 	C$part3.c$99$1$31 ==.
                           1508 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:99: start_conversion = 1;
   0104 75 08 01      [24] 1509 	mov	_start_conversion,#0x01
                     009A  1510 	C$part3.c$100$1$31 ==.
                     009A  1511 	XG$int0_interrupt$0$0 ==.
   0107 32            [24] 1512 	reti
                           1513 ;	eliminated unneeded mov psw,# (no regs used in bank)
                           1514 ;	eliminated unneeded push/pop psw
                           1515 ;	eliminated unneeded push/pop dpl
                           1516 ;	eliminated unneeded push/pop dph
                           1517 ;	eliminated unneeded push/pop b
                           1518 ;	eliminated unneeded push/pop acc
                           1519 ;------------------------------------------------------------
                           1520 ;Allocation info for local variables in function 'SYSCLK_INIT'
                           1521 ;------------------------------------------------------------
                           1522 ;i                         Allocated to registers 
                           1523 ;SFRPAGE_SAVE              Allocated to registers r7 
                           1524 ;------------------------------------------------------------
                     009B  1525 	G$SYSCLK_INIT$0$0 ==.
                     009B  1526 	C$part3.c$106$1$31 ==.
                           1527 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:106: void SYSCLK_INIT(void)
                           1528 ;	-----------------------------------------
                           1529 ;	 function SYSCLK_INIT
                           1530 ;	-----------------------------------------
   0108                    1531 _SYSCLK_INIT:
                     009B  1532 	C$part3.c$109$1$31 ==.
                           1533 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:109: char SFRPAGE_SAVE = SFRPAGE;
   0108 AF 84         [24] 1534 	mov	r7,_SFRPAGE
                     009D  1535 	C$part3.c$110$1$33 ==.
                           1536 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:110: SFRPAGE = CONFIG_PAGE;
   010A 75 84 0F      [24] 1537 	mov	_SFRPAGE,#0x0F
                     00A0  1538 	C$part3.c$112$1$33 ==.
                           1539 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:112: OSCXCN = 0x67;
   010D 75 8C 67      [24] 1540 	mov	_OSCXCN,#0x67
                     00A3  1541 	C$part3.c$113$1$33 ==.
                           1542 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:113: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
   0110 7D B8         [12] 1543 	mov	r5,#0xB8
   0112 7E 0B         [12] 1544 	mov	r6,#0x0B
   0114                    1545 00107$:
   0114 1D            [12] 1546 	dec	r5
   0115 BD FF 01      [24] 1547 	cjne	r5,#0xFF,00121$
   0118 1E            [12] 1548 	dec	r6
   0119                    1549 00121$:
   0119 ED            [12] 1550 	mov	a,r5
   011A 4E            [12] 1551 	orl	a,r6
   011B 70 F7         [24] 1552 	jnz	00107$
                     00B0  1553 	C$part3.c$114$1$33 ==.
                           1554 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:114: while ((OSCXCN & 0x80) == 0);
   011D                    1555 00102$:
   011D E5 8C         [12] 1556 	mov	a,_OSCXCN
   011F 30 E7 FB      [24] 1557 	jnb	acc.7,00102$
                     00B5  1558 	C$part3.c$115$1$33 ==.
                           1559 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:115: CLKSEL = 0x01;
   0122 75 97 01      [24] 1560 	mov	_CLKSEL,#0x01
                     00B8  1561 	C$part3.c$116$1$33 ==.
                           1562 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:116: OSCICN &= ~0x80;
   0125 AE 8A         [24] 1563 	mov	r6,_OSCICN
   0127 74 7F         [12] 1564 	mov	a,#0x7F
   0129 5E            [12] 1565 	anl	a,r6
   012A F5 8A         [12] 1566 	mov	_OSCICN,a
                     00BF  1567 	C$part3.c$118$1$33 ==.
                           1568 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:118: SFRPAGE = SFRPAGE_SAVE;
   012C 8F 84         [24] 1569 	mov	_SFRPAGE,r7
                     00C1  1570 	C$part3.c$119$1$33 ==.
                     00C1  1571 	XG$SYSCLK_INIT$0$0 ==.
   012E 22            [24] 1572 	ret
                           1573 ;------------------------------------------------------------
                           1574 ;Allocation info for local variables in function 'PORT_INIT'
                           1575 ;------------------------------------------------------------
                     00C2  1576 	G$PORT_INIT$0$0 ==.
                     00C2  1577 	C$part3.c$125$1$33 ==.
                           1578 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:125: void PORT_INIT(void)
                           1579 ;	-----------------------------------------
                           1580 ;	 function PORT_INIT
                           1581 ;	-----------------------------------------
   012F                    1582 _PORT_INIT:
                     00C2  1583 	C$part3.c$127$1$35 ==.
                           1584 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:127: SFRPAGE = CONFIG_PAGE;
   012F 75 84 0F      [24] 1585 	mov	_SFRPAGE,#0x0F
                     00C5  1586 	C$part3.c$129$1$35 ==.
                           1587 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:129: WDTCN	= 0xDE;			// Disable watchdog timer.
   0132 75 FF DE      [24] 1588 	mov	_WDTCN,#0xDE
                     00C8  1589 	C$part3.c$130$1$35 ==.
                           1590 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:130: WDTCN	= 0xAD;
   0135 75 FF AD      [24] 1591 	mov	_WDTCN,#0xAD
                     00CB  1592 	C$part3.c$132$1$35 ==.
                           1593 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:132: XBR0 = 0x04;
   0138 75 E1 04      [24] 1594 	mov	_XBR0,#0x04
                     00CE  1595 	C$part3.c$133$1$35 ==.
                           1596 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:133: XBR1 = 0x04; // Enable external interrupt
   013B 75 E2 04      [24] 1597 	mov	_XBR1,#0x04
                     00D1  1598 	C$part3.c$134$1$35 ==.
                           1599 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:134: XBR2 = 0x40; //Enable crossbar
   013E 75 E3 40      [24] 1600 	mov	_XBR2,#0x40
                     00D4  1601 	C$part3.c$136$1$35 ==.
                           1602 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:136: P0MDOUT = 0x01;// Set TX0 pin to push-pull, RX and Push Button to open drain
   0141 75 A4 01      [24] 1603 	mov	_P0MDOUT,#0x01
                     00D7  1604 	C$part3.c$137$1$35 ==.
                           1605 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:137: P0 = 0x06; // Inputs RX and Push Button set to high impedence
   0144 75 80 06      [24] 1606 	mov	_P0,#0x06
                     00DA  1607 	C$part3.c$139$1$35 ==.
                           1608 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:139: SFRPAGE = LEGACY_PAGE;
   0147 75 84 00      [24] 1609 	mov	_SFRPAGE,#0x00
                     00DD  1610 	C$part3.c$140$1$35 ==.
                           1611 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:140: IT0 = 0; // /INT0 is edge triggered, falling-edge.
   014A C2 88         [12] 1612 	clr	_IT0
                     00DF  1613 	C$part3.c$141$1$35 ==.
                     00DF  1614 	XG$PORT_INIT$0$0 ==.
   014C 22            [24] 1615 	ret
                           1616 ;------------------------------------------------------------
                           1617 ;Allocation info for local variables in function 'UART0_INIT'
                           1618 ;------------------------------------------------------------
                           1619 ;SFRPAGE_SAVE              Allocated to registers r7 
                           1620 ;------------------------------------------------------------
                     00E0  1621 	G$UART0_INIT$0$0 ==.
                     00E0  1622 	C$part3.c$147$1$35 ==.
                           1623 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:147: void UART0_INIT(void)
                           1624 ;	-----------------------------------------
                           1625 ;	 function UART0_INIT
                           1626 ;	-----------------------------------------
   014D                    1627 _UART0_INIT:
                     00E0  1628 	C$part3.c$149$1$35 ==.
                           1629 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:149: char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
   014D AF 84         [24] 1630 	mov	r7,_SFRPAGE
                     00E2  1631 	C$part3.c$151$1$37 ==.
                           1632 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:151: SFRPAGE = UART0_PAGE;
   014F 75 84 00      [24] 1633 	mov	_SFRPAGE,#0x00
                     00E5  1634 	C$part3.c$152$1$37 ==.
                           1635 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:152: SCON0	 = 0x50;					// Mode 1, 8-bit UART, enable RX
   0152 75 98 50      [24] 1636 	mov	_SCON0,#0x50
                     00E8  1637 	C$part3.c$153$1$37 ==.
                           1638 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:153: SSTA0	 = 0x10;					// SMOD0 = 1
   0155 75 91 10      [24] 1639 	mov	_SSTA0,#0x10
                     00EB  1640 	C$part3.c$155$1$37 ==.
                           1641 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:155: SFRPAGE = TIMER01_PAGE;
   0158 75 84 00      [24] 1642 	mov	_SFRPAGE,#0x00
                     00EE  1643 	C$part3.c$156$1$37 ==.
                           1644 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:156: TMOD	&= ~0xF0;
   015B AE 89         [24] 1645 	mov	r6,_TMOD
   015D 74 0F         [12] 1646 	mov	a,#0x0F
   015F 5E            [12] 1647 	anl	a,r6
   0160 F5 89         [12] 1648 	mov	_TMOD,a
                     00F5  1649 	C$part3.c$157$1$37 ==.
                           1650 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:157: TMOD	|=  0x20;					// Timer1, Mode 2, 8-bit reload
   0162 43 89 20      [24] 1651 	orl	_TMOD,#0x20
                     00F8  1652 	C$part3.c$158$1$37 ==.
                           1653 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:158: TH1		 = -SYSCLK/(BAUDRATE*16); // Set Timer1 reload baudrate value T1 Hi Byte
   0165 75 8D F4      [24] 1654 	mov	_TH1,#0xF4
                     00FB  1655 	C$part3.c$159$1$37 ==.
                           1656 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:159: CKCON	|= 0x10;					// Timer1 uses SYSCLK as time base
   0168 43 8E 10      [24] 1657 	orl	_CKCON,#0x10
                     00FE  1658 	C$part3.c$160$1$37 ==.
                           1659 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:160: TL1		 = TH1;
   016B 85 8D 8B      [24] 1660 	mov	_TL1,_TH1
                     0101  1661 	C$part3.c$161$1$37 ==.
                           1662 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:161: TR1		 = 1;						// Start Timer1
   016E D2 8E         [12] 1663 	setb	_TR1
                     0103  1664 	C$part3.c$163$1$37 ==.
                           1665 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:163: SFRPAGE = UART0_PAGE;
   0170 75 84 00      [24] 1666 	mov	_SFRPAGE,#0x00
                     0106  1667 	C$part3.c$164$1$37 ==.
                           1668 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:164: TI0 = 1;							// Indicate TX0 ready
   0173 D2 99         [12] 1669 	setb	_TI0
                     0108  1670 	C$part3.c$166$1$37 ==.
                           1671 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:166: SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
   0175 8F 84         [24] 1672 	mov	_SFRPAGE,r7
                     010A  1673 	C$part3.c$167$1$37 ==.
                     010A  1674 	XG$UART0_INIT$0$0 ==.
   0177 22            [24] 1675 	ret
                           1676 ;------------------------------------------------------------
                           1677 ;Allocation info for local variables in function 'ADC_INIT'
                           1678 ;------------------------------------------------------------
                           1679 ;SFRPAGE_SAVE              Allocated to registers 
                           1680 ;------------------------------------------------------------
                     010B  1681 	G$ADC_INIT$0$0 ==.
                     010B  1682 	C$part3.c$169$1$37 ==.
                           1683 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:169: void ADC_INIT(void)
                           1684 ;	-----------------------------------------
                           1685 ;	 function ADC_INIT
                           1686 ;	-----------------------------------------
   0178                    1687 _ADC_INIT:
                     010B  1688 	C$part3.c$171$1$37 ==.
                           1689 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:171: char SFRPAGE_SAVE = SFRPAGE;
   0178 E5 84         [12] 1690 	mov	a,_SFRPAGE
                     010D  1691 	C$part3.c$172$1$39 ==.
                           1692 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:172: SFRPAGE = ADC0_PAGE;
   017A 75 84 00      [24] 1693 	mov	_SFRPAGE,#0x00
                     0110  1694 	C$part3.c$174$1$39 ==.
                           1695 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:174: AMX0CF = 0x00; // All input ports set to single-ended mode
   017D 75 BA 00      [24] 1696 	mov	_AMX0CF,#0x00
                     0113  1697 	C$part3.c$175$1$39 ==.
                           1698 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:175: AMX0SL = 0x00; // Select port AIN0.0 for inpit
   0180 75 BB 00      [24] 1699 	mov	_AMX0SL,#0x00
                     0116  1700 	C$part3.c$176$1$39 ==.
                           1701 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:176: ADC0CF = 0x20; // ADC clock rate < 2.5MHz, internal gain of 1
   0183 75 BC 20      [24] 1702 	mov	_ADC0CF,#0x20
                     0119  1703 	C$part3.c$177$1$39 ==.
                           1704 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:177: ADC0CN = 0x00;
   0186 75 E8 00      [24] 1705 	mov	_ADC0CN,#0x00
                     011C  1706 	C$part3.c$178$1$39 ==.
                           1707 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:178: REF0CN = 0x03; // Voltage reference from VREF0 pin; enable bias generator and disable reference buffer
   0189 75 D1 03      [24] 1708 	mov	_REF0CN,#0x03
                     011F  1709 	C$part3.c$179$1$39 ==.
                           1710 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:179: AD0EN = 1; //Enable ADC
   018C D2 EF         [12] 1711 	setb	_AD0EN
                     0121  1712 	C$part3.c$180$1$39 ==.
                     0121  1713 	XG$ADC_INIT$0$0 ==.
   018E 22            [24] 1714 	ret
                           1715 ;------------------------------------------------------------
                           1716 ;Allocation info for local variables in function 'DAC_INIT'
                           1717 ;------------------------------------------------------------
                     0122  1718 	G$DAC_INIT$0$0 ==.
                     0122  1719 	C$part3.c$182$1$39 ==.
                           1720 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:182: void DAC_INIT(void)
                           1721 ;	-----------------------------------------
                           1722 ;	 function DAC_INIT
                           1723 ;	-----------------------------------------
   018F                    1724 _DAC_INIT:
                     0122  1725 	C$part3.c$184$1$41 ==.
                           1726 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:184: SFRPAGE = DAC0_PAGE;
   018F 75 84 00      [24] 1727 	mov	_SFRPAGE,#0x00
                     0125  1728 	C$part3.c$185$1$41 ==.
                           1729 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:185: DAC0CN = 0x80;
   0192 75 D4 80      [24] 1730 	mov	_DAC0CN,#0x80
                     0128  1731 	C$part3.c$186$1$41 ==.
                     0128  1732 	XG$DAC_INIT$0$0 ==.
   0195 22            [24] 1733 	ret
                           1734 ;------------------------------------------------------------
                           1735 ;Allocation info for local variables in function 'INTERRUPT_INIT'
                           1736 ;------------------------------------------------------------
                     0129  1737 	G$INTERRUPT_INIT$0$0 ==.
                     0129  1738 	C$part3.c$188$1$41 ==.
                           1739 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:188: void INTERRUPT_INIT(void) {
                           1740 ;	-----------------------------------------
                           1741 ;	 function INTERRUPT_INIT
                           1742 ;	-----------------------------------------
   0196                    1743 _INTERRUPT_INIT:
                     0129  1744 	C$part3.c$189$1$43 ==.
                           1745 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:189: EA = 1;
   0196 D2 AF         [12] 1746 	setb	_EA
                     012B  1747 	C$part3.c$191$1$43 ==.
                           1748 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:191: EX0 = 1; //External interrupts
   0198 D2 A8         [12] 1749 	setb	_EX0
                     012D  1750 	C$part3.c$192$1$43 ==.
                     012D  1751 	XG$INTERRUPT_INIT$0$0 ==.
   019A 22            [24] 1752 	ret
                           1753 ;------------------------------------------------------------
                           1754 ;Allocation info for local variables in function 'TIMER_INIT'
                           1755 ;------------------------------------------------------------
                     012E  1756 	G$TIMER_INIT$0$0 ==.
                     012E  1757 	C$part3.c$194$1$43 ==.
                           1758 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:194: void TIMER_INIT(void) {
                           1759 ;	-----------------------------------------
                           1760 ;	 function TIMER_INIT
                           1761 ;	-----------------------------------------
   019B                    1762 _TIMER_INIT:
                     012E  1763 	C$part3.c$195$1$45 ==.
                           1764 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:195: TMOD = 0x01; // Timer0 in 16-bit mode
   019B 75 89 01      [24] 1765 	mov	_TMOD,#0x01
                     0131  1766 	C$part3.c$196$1$45 ==.
                           1767 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:196: CKCON = 0x08; // Timer0 uses sysclk
   019E 75 8E 08      [24] 1768 	mov	_CKCON,#0x08
                     0134  1769 	C$part3.c$197$1$45 ==.
                           1770 ;	C:\Users\Justin\Documents\MPS\git\final\part3.c:197: TR0 = 1; // Enable Timer0
   01A1 D2 8C         [12] 1771 	setb	_TR0
                     0136  1772 	C$part3.c$198$1$45 ==.
                     0136  1773 	XG$TIMER_INIT$0$0 ==.
   01A3 22            [24] 1774 	ret
                           1775 	.area CSEG    (CODE)
                           1776 	.area CONST   (CODE)
                           1777 	.area XINIT   (CODE)
                           1778 	.area CABS    (ABS,CODE)
