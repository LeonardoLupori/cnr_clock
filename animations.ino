

void neon()
{
  for(int col=0;col<256;col=col+3){
    
    bg(Wheel(col));
    strip.show();
    delay(512+50-(col+1)*2);
    
    off();
    strip.show();
    delay(512-(col+1)*2);
  }
  }

void matrix(int reps){
  for (int i=0;i<=reps;i++){
      effect3(0,inc1);
      effect3(1,inc2);
      effect3(2,inc3);
      effect3(3,inc4);
      effect3(4,inc5);
      effect3(5,inc6);
      effect3(6,inc7);
      effect3(7,inc8);
      effect3(8,inc9);
      effect3(9,inc10);
      effect3(10,inc11);
      effect3(11,inc12);
      effect3(12,inc13);
      effect3(13,inc14);
      //effect3(14,inc15);
      effect3(15,inc16);
      effect3(16,inc17);

        strip.show();
  off();
  delay(100);
  }
}

void letitsnow(int reps){
  for (int i=0;i<=reps;i++){
    christmastree(0);
    christmastree(6);
    christmastree(12);
      effect4(0,s_inc1);
      effect4(1,s_inc2);
      //effect4(2,s_inc3);
      //effect4(3,s_inc4);
      effect4(4,s_inc5);
      effect4(5,s_inc6);
      effect4(6,s_inc7);
      effect4(7,s_inc8);
      //effect4(8,s_inc9);
      effect4(9,s_inc10);
      effect4(10,s_inc11);
      effect4(11,s_inc12);
      effect4(12,s_inc13);
      effect4(13,s_inc14);
      //effect4(14,s_inc15);
      effect4(15,s_inc16);
      effect4(16,s_inc17);
        strip.show();
  off();
  delay(220);
  }
}


void effect3(int col,int *inc) // matrix
{
  if(inc[0]>inc[1]+4){
    inc[0] = random(lower,0);
    //inc[1] = random(lower,0);
  }
    strip.setPixelColor(coo(col,inc[0]),255,255,255);
    for (int i = 1; i < inc[1]; i=i + 1){
      int val = map(i, 1, inc[1], 255, 0);
      strip.setPixelColor(coo(col,inc[0]-i),0, val, 0);
    }
    inc[0]=inc[0]+1;
}

void effect4(int col,int *inc) // matrix
{
  if(inc[0]>inc[1]+4){
    inc[0] = random(s_lower,0);
    //inc[1] = random(s_lower,0);
  }
    strip.setPixelColor(coo(col,inc[0]),255,255,255);
    for (int i = 1; i < inc[1]; i=i + 1){
      int val = map(i, 1, inc[1], 255, 0);
      strip.setPixelColor(coo(col,inc[0]-i),val, val, val);
    }
    inc[0]=inc[0]+1;
}


void sinewave(int count)
{
  for(int d=0;d<count;d=d+1){
    for(int i=0;i<17;i=i+1){
          int seno =  126 + ( 126 * sin(i * .8 + d));
          strip.setPixelColor(coo(i,0),0, 0,seno);
          strip.setPixelColor(coo(i,1),0, 0,seno);
          strip.setPixelColor(coo(i,2),0, 0,seno);
          strip.setPixelColor(coo(i,3),0,0,seno);
          strip.setPixelColor(coo(i,4),0,0,seno);
      }
      strip.show();
      delay(100);
  }
}

void chaos(int count)
{
  for(int i=0;i<count;i=i+1){
        strip.setPixelColor(coo(random(0,17),random(0,5)),random(0,255),random(0,255),random(0,255));
        strip.show();
        delay(20);
    }
}

//*********************************************************************************************
//*** supercar - Performs the original "supercar" animation
//*********************************************************************************************
  void supercar(int reps)
  {
    for (int j=0;j<reps;j++){
      for (int i=0;i<16;i++){
          off();
          linev(i,strip.Color(255,255,255));
          linev(i+1,strip.Color(127,127,127));
          strip.show();
          delay(100);
        }
  
        for (int i=16;i>0;i--){
          off();
          linev(i,strip.Color(255,255,255));
          linev(i-1,strip.Color(127,127,127));
          strip.show();
          delay(100);
        }
      }
   }


void omino(int frame,int pos)
{
   //int pos=0;

   uint32_t color = strip.Color(255, 255, 0);
    uint32_t head = strip.Color(255, 0, 0);
    uint32_t foot1 = strip.Color(0, 0, 255);
    uint32_t foot2 = strip.Color(0, 255, 0);
    
  if(frame==0)
  {
    strip.setPixelColor(coo(pos+1,1),head);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,4),foot2);
    strip.setPixelColor(coo(pos+0,4),foot1);
    strip.setPixelColor(coo(pos+1,3),color);
    strip.setPixelColor(coo(pos+1,2),color);
  }
  if(frame==1){
    strip.setPixelColor(coo(pos+1,1),head);
    strip.setPixelColor(coo(pos+0,3),color);
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,4),foot1);
    strip.setPixelColor(coo(pos+1,4),foot2);
    strip.setPixelColor(coo(pos+1,3),color);
    strip.setPixelColor(coo(pos+1,2),color);
  
}
}

void danceHall()
{
  int i=0;
  for(int i=0;i<100;i++){
      
      omino(i % 2,0);
      omino(i % 2,14);
      omino(i % 2,i);
      omino(i % 2,13-i);

      if(i % 2==0)
      { ball(); }
      
      strip.show();
      delay(500);
      off();
      
    }
  }
  

void ball()
{
  uint32_t light = strip.Color(255, 255, 255);
  strip.setPixelColor(coo(7,0),light);
  strip.setPixelColor(coo(8,0),light);
  strip.setPixelColor(coo(9,0),light);
  strip.setPixelColor(coo(7,1),light);
  strip.setPixelColor(coo(8,1),light);
  strip.setPixelColor(coo(9,1),light);
}

void christmasball(int pos)
{
  uint32_t green = strip.Color(0, 255, 0);
  uint32_t gold = strip.Color(255, 215, 0);
  uint32_t white = strip.Color(255,255,255);
  uint32_t red = strip.Color(255,0,0);
pos=pos%16;
  strip.setPixelColor(coo(pos+0,0),green);
  strip.setPixelColor(coo(pos+1,0),white);
  strip.setPixelColor(coo(pos+2,0),white);
  strip.setPixelColor(coo(pos+3,0),white);

  strip.setPixelColor(coo(pos+0,1),red);
  strip.setPixelColor(coo(pos+1,1),gold);
  strip.setPixelColor(coo(pos+2,1),gold);
  strip.setPixelColor(coo(pos+3,1),gold);


  strip.setPixelColor(coo(pos+0,2),gold);
  strip.setPixelColor(coo(pos+1,2),red);
  strip.setPixelColor(coo(pos+2,2),gold);
  strip.setPixelColor(coo(pos+3,2),red);

  strip.setPixelColor(coo(pos+0,3),gold);
  strip.setPixelColor(coo(pos+1,3),gold);
  strip.setPixelColor(coo(pos+2,3),red);
  strip.setPixelColor(coo(pos+3,3),gold);

  strip.setPixelColor(coo(pos+0,4),white);
  strip.setPixelColor(coo(pos+1,4),white);
  strip.setPixelColor(coo(pos+2,4),green);
  strip.setPixelColor(coo(pos+3,4),white);
    
}


void christmastree(int pos)
{
  uint32_t green = strip.Color(0, 255, 0);
  uint32_t gold = strip.Color(255, 215, 0);
  uint32_t brown = strip.Color(139,69,19);
  
  pos=pos%16;
  
  strip.setPixelColor(coo(pos+2,4),brown);
  
  strip.setPixelColor(coo(pos+0,3),green);
  strip.setPixelColor(coo(pos+1,3),green);
  strip.setPixelColor(coo(pos+2,3),green);
  strip.setPixelColor(coo(pos+3,3),green);
  strip.setPixelColor(coo(pos+4,3),green);
  
  strip.setPixelColor(coo(pos+1,2),green);
  strip.setPixelColor(coo(pos+2,2),green);
  strip.setPixelColor(coo(pos+3,2),green);
  
  strip.setPixelColor(coo(pos+2,1),green);
  strip.setPixelColor(coo(pos+2,0),gold);

  }


  void christmas()
  {
    for (int i = 0; i<200;i++)
    {
      //christmastree(0);
      christmasball(i);
      christmasball(i+4);
      christmasball(i+8);
      
      strip.show();
      delay(100);
      off();
      }
    
  }

  void rand_animation()
  {
    int caso =  random(0,6);

    switch (caso){
      case 0:
        danceHall();
        break;
        
      case 1:
        neon();
        break;
      
      case 2:
        supercar(10);
        break;
      
      case 3:
        matrix(100);
        break;

      case 4:
        sinewave(100);
        break;
      case 5:
        chaos(1000);
        break;
    }
  }





  
