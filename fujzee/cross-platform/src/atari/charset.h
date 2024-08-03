#ifdef __ATARI__

const unsigned char charset[] = {
  0,0,0,0,0,0,0,0
	,48,48,48,48,48,0,48,0
	,0,102,102,102,0,0,0,0
	,0,102,255,102,102,255,102,0
	,24,62,96,60,6,124,24,0
	,0,102,108,24,48,102,70,0
	,28,54,28,56,111,102,59,0
	,48,48,48,0,0,0,0,0
	,0,14,28,24,24,28,14,0
	,0,112,56,24,24,56,112,0
	,0,102,60,255,60,102,0,0
	,0,24,24,126,24,24,0,0
	,0,0,0,0,0,48,48,192
	,0,0,0,60,0,0,0,0
	,0,0,0,0,0,192,192,0
	,12,12,48,48,48,192,192,0
	,48,204,204,204,204,204,48,0
	,48,240,48,48,48,48,252,0
	,48,204,204,12,48,192,252,0
	,48,204,12,48,12,204,48,0
	,12,204,204,252,12,12,12,0
	,252,192,240,12,12,12,240,0
	,60,192,240,204,204,204,48,0
	,252,204,12,48,48,48,48,0
	,48,204,204,48,204,204,48,0
	,48,204,204,204,60,12,240,0
	,0,48,48,0,0,48,48,0
	,0,48,48,0,0,48,48,192
	,6,12,24,48,24,12,6,0
	,0,60,40,40,40,40,20,0
	,0,48,32,0,0,48,32,0
	,0,48,204,204,12,48,0,48
	,0,60,102,110,110,96,62,0
	,252,116,252,220,252,116,252,0
	,0,124,102,124,102,102,124,0
	,0,60,102,96,96,102,60,0
	,0,120,108,102,102,108,120,0
	,0,126,96,124,96,96,126,0
	,252,204,130,243,130,195,130,192
	,0,3,32,48,32,48,32,243
	,0,207,128,194,131,206,136,15
	,0,207,136,204,11,12,8,207
	,0,60,32,48,44,48,32,60
	,215,221,221,213,215,221,221,255
	,255,253,253,221,117,117,221,255
	,255,223,223,223,223,223,23,255
	,255,235,235,255,235,235,255,255
	,255,255,255,255,235,235,255,255
	,255,255,255,255,255,255,255,255
	,0,0,2,11,46,59,46,56
	,0,0,192,176,236,184,236,56
	,44,59,46,59,14,3,0,0
	,44,184,236,184,224,128,0,0
	,44,56,44,56,44,56,44,56
	,0,0,238,187,238,187,0,0
	,0,0,0,0,0,0,0,0
	,0,102,102,60,60,102,102,0
	,0,102,102,60,24,24,24,0
	,0,126,12,24,48,96,126,0
	,0,30,24,24,24,24,30,0
	,0,64,96,48,24,12,6,0
	,60,60,12,12,12,12,60,60
	,0,8,28,54,99,0,0,0
	,0,0,0,0,0,0,255,0
	,255,255,255,255,255,255,255,255
	,63,63,255,255,255,255,255,255
	,252,252,255,255,255,255,255,255
	,255,255,255,255,255,255,63,63
	,255,255,255,255,255,255,252,252
	,255,255,215,215,215,215,255,255
	,63,63,255,255,245,245,245,245
	,252,252,255,255,95,95,95,95
	,245,245,245,245,255,255,63,63
	,95,95,95,95,255,255,252,252
	,255,255,245,245,245,245,255,255
	,255,255,95,95,95,95,255,255
	,0,0,0,0,0,0,0,0
	,0,0,0,0,0,0,0,0
	,0,0,0,0,0,0,0,0
	,0,0,0,0,0,0,0,0
	,0,32,184,152,168,100,96,96
	,0,0,10,42,105,101,96,96
	,0,0,170,170,85,85,0,0
	,96,96,96,106,101,96,96,96
	,0,0,0,170,85,0,0,0
	,0,0,128,160,160,96,96,96
	,96,96,106,106,101,101,96,96
	,96,104,106,90,21,5,0,0
	,96,96,170,154,85,69,0,0
	,0,252,253,253,253,253,253,21
	,96,160,160,144,80,64,0,0
	,120,96,120,96,126,24,30,0
	,0,24,60,126,24,24,24,0
	,0,24,24,24,126,60,24,0
	,0,24,48,126,48,24,0,0
	,0,24,12,126,12,24,0,0
	,0,24,60,126,126,60,24,0
	,48,252,204,204,252,204,204,0
	,240,204,204,240,204,204,240,0
	,60,192,192,192,192,192,60,0
	,240,204,204,204,204,204,240,0
	,252,204,192,240,192,192,252,0
	,252,204,192,240,192,192,192,0
	,60,204,192,220,204,204,60,0
	,204,204,204,252,204,204,204,0
	,252,48,48,48,48,48,252,0
	,60,12,12,12,12,204,48,0
	,204,204,240,240,204,204,204,0
	,192,192,192,192,192,192,252,0
	,204,252,252,204,204,204,204,0
	,204,204,252,252,252,204,204,0
	,48,204,204,204,204,204,48,0
	,240,204,204,204,240,192,192,0
	,48,204,204,204,204,48,12,0
	,240,204,204,204,240,204,204,0
	,60,204,192,48,12,204,240,0
	,252,48,48,48,48,48,48,0
	,204,204,204,204,204,204,252,0
	,204,204,204,204,252,48,48,0
	,204,204,204,204,252,252,204,0
	,204,204,48,48,204,204,204,0
	,204,204,204,252,48,48,48,0
	,252,12,48,48,192,192,252,0
	,192,192,15,48,63,3,60,0
	,96,96,96,96,96,96,96,96
	,0,126,120,124,110,102,6,0
	,8,24,56,120,56,24,8,0
	,16,24,28,30,28,24,16,0

  };
  
#endif /* __ATARI__ */