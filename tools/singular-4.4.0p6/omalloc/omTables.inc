#ifndef OM_TABLES_INC
#define OM_TABLES_INC
omBin_t om_StaticBin[/*23*/] = {
{om_ZeroPage, NULL, NULL, 1, 506, 0},
{om_ZeroPage, NULL, NULL, 2, 253, 0},
{om_ZeroPage, NULL, NULL, 3, 168, 0},
{om_ZeroPage, NULL, NULL, 4, 126, 0},
{om_ZeroPage, NULL, NULL, 5, 101, 0},
{om_ZeroPage, NULL, NULL, 6, 84, 0},
{om_ZeroPage, NULL, NULL, 7, 72, 0},
{om_ZeroPage, NULL, NULL, 8, 63, 0},
{om_ZeroPage, NULL, NULL, 9, 56, 0},
{om_ZeroPage, NULL, NULL, 10, 50, 0},
{om_ZeroPage, NULL, NULL, 12, 42, 0},
{om_ZeroPage, NULL, NULL, 14, 36, 0},
{om_ZeroPage, NULL, NULL, 16, 31, 0},
{om_ZeroPage, NULL, NULL, 18, 28, 0},
{om_ZeroPage, NULL, NULL, 20, 25, 0},
{om_ZeroPage, NULL, NULL, 24, 21, 0},
{om_ZeroPage, NULL, NULL, 28, 18, 0},
{om_ZeroPage, NULL, NULL, 38, 13, 0},
{om_ZeroPage, NULL, NULL, 50, 10, 0},
{om_ZeroPage, NULL, NULL, 63, 8, 0},
{om_ZeroPage, NULL, NULL, 84, 6, 0},
{om_ZeroPage, NULL, NULL, 101, 5, 0},
{om_ZeroPage, NULL, NULL, 126, 4, 0}
};

omBin om_Size2Bin[/*126*/] = {
&om_StaticBin[0], /* 8 */ 
&om_StaticBin[1], /* 16 */ 
&om_StaticBin[2], /* 24 */ 
&om_StaticBin[3], /* 32 */ 
&om_StaticBin[4], /* 40 */ 
&om_StaticBin[5], /* 48 */ 
&om_StaticBin[6], /* 56 */ 
&om_StaticBin[7], /* 64 */ 
&om_StaticBin[8], /* 72 */ 
&om_StaticBin[9], /* 80 */ 
&om_StaticBin[10], /* 88 */ 
&om_StaticBin[10], /* 96 */ 
&om_StaticBin[11], /* 104 */ 
&om_StaticBin[11], /* 112 */ 
&om_StaticBin[12], /* 120 */ 
&om_StaticBin[12], /* 128 */ 
&om_StaticBin[13], /* 136 */ 
&om_StaticBin[13], /* 144 */ 
&om_StaticBin[14], /* 152 */ 
&om_StaticBin[14], /* 160 */ 
&om_StaticBin[15], /* 168 */ 
&om_StaticBin[15], /* 176 */ 
&om_StaticBin[15], /* 184 */ 
&om_StaticBin[15], /* 192 */ 
&om_StaticBin[16], /* 200 */ 
&om_StaticBin[16], /* 208 */ 
&om_StaticBin[16], /* 216 */ 
&om_StaticBin[16], /* 224 */ 
&om_StaticBin[17], /* 232 */ 
&om_StaticBin[17], /* 240 */ 
&om_StaticBin[17], /* 248 */ 
&om_StaticBin[17], /* 256 */ 
&om_StaticBin[17], /* 264 */ 
&om_StaticBin[17], /* 272 */ 
&om_StaticBin[17], /* 280 */ 
&om_StaticBin[17], /* 288 */ 
&om_StaticBin[17], /* 296 */ 
&om_StaticBin[17], /* 304 */ 
&om_StaticBin[18], /* 312 */ 
&om_StaticBin[18], /* 320 */ 
&om_StaticBin[18], /* 328 */ 
&om_StaticBin[18], /* 336 */ 
&om_StaticBin[18], /* 344 */ 
&om_StaticBin[18], /* 352 */ 
&om_StaticBin[18], /* 360 */ 
&om_StaticBin[18], /* 368 */ 
&om_StaticBin[18], /* 376 */ 
&om_StaticBin[18], /* 384 */ 
&om_StaticBin[18], /* 392 */ 
&om_StaticBin[18], /* 400 */ 
&om_StaticBin[19], /* 408 */ 
&om_StaticBin[19], /* 416 */ 
&om_StaticBin[19], /* 424 */ 
&om_StaticBin[19], /* 432 */ 
&om_StaticBin[19], /* 440 */ 
&om_StaticBin[19], /* 448 */ 
&om_StaticBin[19], /* 456 */ 
&om_StaticBin[19], /* 464 */ 
&om_StaticBin[19], /* 472 */ 
&om_StaticBin[19], /* 480 */ 
&om_StaticBin[19], /* 488 */ 
&om_StaticBin[19], /* 496 */ 
&om_StaticBin[19], /* 504 */ 
&om_StaticBin[20], /* 512 */ 
&om_StaticBin[20], /* 520 */ 
&om_StaticBin[20], /* 528 */ 
&om_StaticBin[20], /* 536 */ 
&om_StaticBin[20], /* 544 */ 
&om_StaticBin[20], /* 552 */ 
&om_StaticBin[20], /* 560 */ 
&om_StaticBin[20], /* 568 */ 
&om_StaticBin[20], /* 576 */ 
&om_StaticBin[20], /* 584 */ 
&om_StaticBin[20], /* 592 */ 
&om_StaticBin[20], /* 600 */ 
&om_StaticBin[20], /* 608 */ 
&om_StaticBin[20], /* 616 */ 
&om_StaticBin[20], /* 624 */ 
&om_StaticBin[20], /* 632 */ 
&om_StaticBin[20], /* 640 */ 
&om_StaticBin[20], /* 648 */ 
&om_StaticBin[20], /* 656 */ 
&om_StaticBin[20], /* 664 */ 
&om_StaticBin[20], /* 672 */ 
&om_StaticBin[21], /* 680 */ 
&om_StaticBin[21], /* 688 */ 
&om_StaticBin[21], /* 696 */ 
&om_StaticBin[21], /* 704 */ 
&om_StaticBin[21], /* 712 */ 
&om_StaticBin[21], /* 720 */ 
&om_StaticBin[21], /* 728 */ 
&om_StaticBin[21], /* 736 */ 
&om_StaticBin[21], /* 744 */ 
&om_StaticBin[21], /* 752 */ 
&om_StaticBin[21], /* 760 */ 
&om_StaticBin[21], /* 768 */ 
&om_StaticBin[21], /* 776 */ 
&om_StaticBin[21], /* 784 */ 
&om_StaticBin[21], /* 792 */ 
&om_StaticBin[21], /* 800 */ 
&om_StaticBin[21], /* 808 */ 
&om_StaticBin[22], /* 816 */ 
&om_StaticBin[22], /* 824 */ 
&om_StaticBin[22], /* 832 */ 
&om_StaticBin[22], /* 840 */ 
&om_StaticBin[22], /* 848 */ 
&om_StaticBin[22], /* 856 */ 
&om_StaticBin[22], /* 864 */ 
&om_StaticBin[22], /* 872 */ 
&om_StaticBin[22], /* 880 */ 
&om_StaticBin[22], /* 888 */ 
&om_StaticBin[22], /* 896 */ 
&om_StaticBin[22], /* 904 */ 
&om_StaticBin[22], /* 912 */ 
&om_StaticBin[22], /* 920 */ 
&om_StaticBin[22], /* 928 */ 
&om_StaticBin[22], /* 936 */ 
&om_StaticBin[22], /* 944 */ 
&om_StaticBin[22], /* 952 */ 
&om_StaticBin[22], /* 960 */ 
&om_StaticBin[22], /* 968 */ 
&om_StaticBin[22], /* 976 */ 
&om_StaticBin[22], /* 984 */ 
&om_StaticBin[22], /* 992 */ 
&om_StaticBin[22], /* 1000 */ 
&om_StaticBin[22] /* 1008 */};


#ifdef OM_HAVE_TRACK
omBin_t om_StaticTrackBin[/*23*/] = {
{om_ZeroPage, NULL, NULL, 1, 506, 0},
{om_ZeroPage, NULL, NULL, 2, 253, 0},
{om_ZeroPage, NULL, NULL, 3, 168, 0},
{om_ZeroPage, NULL, NULL, 4, 126, 0},
{om_ZeroPage, NULL, NULL, 5, 101, 0},
{om_ZeroPage, NULL, NULL, 6, 84, 0},
{om_ZeroPage, NULL, NULL, 7, 72, 0},
{om_ZeroPage, NULL, NULL, 8, 63, 0},
{om_ZeroPage, NULL, NULL, 9, 56, 0},
{om_ZeroPage, NULL, NULL, 10, 50, 0},
{om_ZeroPage, NULL, NULL, 12, 42, 0},
{om_ZeroPage, NULL, NULL, 14, 36, 0},
{om_ZeroPage, NULL, NULL, 16, 31, 0},
{om_ZeroPage, NULL, NULL, 18, 28, 0},
{om_ZeroPage, NULL, NULL, 20, 25, 0},
{om_ZeroPage, NULL, NULL, 24, 21, 0},
{om_ZeroPage, NULL, NULL, 28, 18, 0},
{om_ZeroPage, NULL, NULL, 38, 13, 0},
{om_ZeroPage, NULL, NULL, 50, 10, 0},
{om_ZeroPage, NULL, NULL, 63, 8, 0},
{om_ZeroPage, NULL, NULL, 84, 6, 0},
{om_ZeroPage, NULL, NULL, 101, 5, 0},
{om_ZeroPage, NULL, NULL, 126, 4, 0}
};

omBin om_Size2TrackBin[/*126*/] = {
&om_StaticTrackBin[0], /* 8 */ 
&om_StaticTrackBin[1], /* 16 */ 
&om_StaticTrackBin[2], /* 24 */ 
&om_StaticTrackBin[3], /* 32 */ 
&om_StaticTrackBin[4], /* 40 */ 
&om_StaticTrackBin[5], /* 48 */ 
&om_StaticTrackBin[6], /* 56 */ 
&om_StaticTrackBin[7], /* 64 */ 
&om_StaticTrackBin[8], /* 72 */ 
&om_StaticTrackBin[9], /* 80 */ 
&om_StaticTrackBin[10], /* 88 */ 
&om_StaticTrackBin[10], /* 96 */ 
&om_StaticTrackBin[11], /* 104 */ 
&om_StaticTrackBin[11], /* 112 */ 
&om_StaticTrackBin[12], /* 120 */ 
&om_StaticTrackBin[12], /* 128 */ 
&om_StaticTrackBin[13], /* 136 */ 
&om_StaticTrackBin[13], /* 144 */ 
&om_StaticTrackBin[14], /* 152 */ 
&om_StaticTrackBin[14], /* 160 */ 
&om_StaticTrackBin[15], /* 168 */ 
&om_StaticTrackBin[15], /* 176 */ 
&om_StaticTrackBin[15], /* 184 */ 
&om_StaticTrackBin[15], /* 192 */ 
&om_StaticTrackBin[16], /* 200 */ 
&om_StaticTrackBin[16], /* 208 */ 
&om_StaticTrackBin[16], /* 216 */ 
&om_StaticTrackBin[16], /* 224 */ 
&om_StaticTrackBin[17], /* 232 */ 
&om_StaticTrackBin[17], /* 240 */ 
&om_StaticTrackBin[17], /* 248 */ 
&om_StaticTrackBin[17], /* 256 */ 
&om_StaticTrackBin[17], /* 264 */ 
&om_StaticTrackBin[17], /* 272 */ 
&om_StaticTrackBin[17], /* 280 */ 
&om_StaticTrackBin[17], /* 288 */ 
&om_StaticTrackBin[17], /* 296 */ 
&om_StaticTrackBin[17], /* 304 */ 
&om_StaticTrackBin[18], /* 312 */ 
&om_StaticTrackBin[18], /* 320 */ 
&om_StaticTrackBin[18], /* 328 */ 
&om_StaticTrackBin[18], /* 336 */ 
&om_StaticTrackBin[18], /* 344 */ 
&om_StaticTrackBin[18], /* 352 */ 
&om_StaticTrackBin[18], /* 360 */ 
&om_StaticTrackBin[18], /* 368 */ 
&om_StaticTrackBin[18], /* 376 */ 
&om_StaticTrackBin[18], /* 384 */ 
&om_StaticTrackBin[18], /* 392 */ 
&om_StaticTrackBin[18], /* 400 */ 
&om_StaticTrackBin[19], /* 408 */ 
&om_StaticTrackBin[19], /* 416 */ 
&om_StaticTrackBin[19], /* 424 */ 
&om_StaticTrackBin[19], /* 432 */ 
&om_StaticTrackBin[19], /* 440 */ 
&om_StaticTrackBin[19], /* 448 */ 
&om_StaticTrackBin[19], /* 456 */ 
&om_StaticTrackBin[19], /* 464 */ 
&om_StaticTrackBin[19], /* 472 */ 
&om_StaticTrackBin[19], /* 480 */ 
&om_StaticTrackBin[19], /* 488 */ 
&om_StaticTrackBin[19], /* 496 */ 
&om_StaticTrackBin[19], /* 504 */ 
&om_StaticTrackBin[20], /* 512 */ 
&om_StaticTrackBin[20], /* 520 */ 
&om_StaticTrackBin[20], /* 528 */ 
&om_StaticTrackBin[20], /* 536 */ 
&om_StaticTrackBin[20], /* 544 */ 
&om_StaticTrackBin[20], /* 552 */ 
&om_StaticTrackBin[20], /* 560 */ 
&om_StaticTrackBin[20], /* 568 */ 
&om_StaticTrackBin[20], /* 576 */ 
&om_StaticTrackBin[20], /* 584 */ 
&om_StaticTrackBin[20], /* 592 */ 
&om_StaticTrackBin[20], /* 600 */ 
&om_StaticTrackBin[20], /* 608 */ 
&om_StaticTrackBin[20], /* 616 */ 
&om_StaticTrackBin[20], /* 624 */ 
&om_StaticTrackBin[20], /* 632 */ 
&om_StaticTrackBin[20], /* 640 */ 
&om_StaticTrackBin[20], /* 648 */ 
&om_StaticTrackBin[20], /* 656 */ 
&om_StaticTrackBin[20], /* 664 */ 
&om_StaticTrackBin[20], /* 672 */ 
&om_StaticTrackBin[21], /* 680 */ 
&om_StaticTrackBin[21], /* 688 */ 
&om_StaticTrackBin[21], /* 696 */ 
&om_StaticTrackBin[21], /* 704 */ 
&om_StaticTrackBin[21], /* 712 */ 
&om_StaticTrackBin[21], /* 720 */ 
&om_StaticTrackBin[21], /* 728 */ 
&om_StaticTrackBin[21], /* 736 */ 
&om_StaticTrackBin[21], /* 744 */ 
&om_StaticTrackBin[21], /* 752 */ 
&om_StaticTrackBin[21], /* 760 */ 
&om_StaticTrackBin[21], /* 768 */ 
&om_StaticTrackBin[21], /* 776 */ 
&om_StaticTrackBin[21], /* 784 */ 
&om_StaticTrackBin[21], /* 792 */ 
&om_StaticTrackBin[21], /* 800 */ 
&om_StaticTrackBin[21], /* 808 */ 
&om_StaticTrackBin[22], /* 816 */ 
&om_StaticTrackBin[22], /* 824 */ 
&om_StaticTrackBin[22], /* 832 */ 
&om_StaticTrackBin[22], /* 840 */ 
&om_StaticTrackBin[22], /* 848 */ 
&om_StaticTrackBin[22], /* 856 */ 
&om_StaticTrackBin[22], /* 864 */ 
&om_StaticTrackBin[22], /* 872 */ 
&om_StaticTrackBin[22], /* 880 */ 
&om_StaticTrackBin[22], /* 888 */ 
&om_StaticTrackBin[22], /* 896 */ 
&om_StaticTrackBin[22], /* 904 */ 
&om_StaticTrackBin[22], /* 912 */ 
&om_StaticTrackBin[22], /* 920 */ 
&om_StaticTrackBin[22], /* 928 */ 
&om_StaticTrackBin[22], /* 936 */ 
&om_StaticTrackBin[22], /* 944 */ 
&om_StaticTrackBin[22], /* 952 */ 
&om_StaticTrackBin[22], /* 960 */ 
&om_StaticTrackBin[22], /* 968 */ 
&om_StaticTrackBin[22], /* 976 */ 
&om_StaticTrackBin[22], /* 984 */ 
&om_StaticTrackBin[22], /* 992 */ 
&om_StaticTrackBin[22], /* 1000 */ 
&om_StaticTrackBin[22] /* 1008 */};


#endif /* OM_HAVE_TRACK */

#endif /* OM_TABLES_INC */
