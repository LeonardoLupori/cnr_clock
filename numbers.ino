

void numbers(char num,int pos,uint32_t color)
{
  //uint32_t color = strip.Color(255, 255, 0);
  
  if(num=='1'){
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+1,1),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+1,3),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+2,4),color);
  }

  if(num=='2'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+0,3),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+2,4),color);

    strip.setPixelColor(coo(pos+2,0),color); //
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+0,2),color);
  } 
  
  if(num=='3'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+2,4),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+0,4),color);
  } 

  if(num=='4'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+2,4),color);
  }

  if(num=='5'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+2,4),color); // que
  }

  if(num=='6'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+0,3),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+2,4),color);
  }

  if(num=='7'){
      strip.setPixelColor(coo(pos+0,0),color);
      strip.setPixelColor(coo(pos+1,0),color);
      strip.setPixelColor(coo(pos+2,0),color);
      strip.setPixelColor(coo(pos+2,1),color);
      strip.setPixelColor(coo(pos+1,2),color);
      strip.setPixelColor(coo(pos+0,3),color);
      strip.setPixelColor(coo(pos+0,4),color);
  }

  if(num=='8'){
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+0,3),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+2,4),color);
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+2,4),color);
    strip.setPixelColor(coo(pos+1,2),color);
  }

  if(num=='9'){
    strip.setPixelColor(coo(pos+2,0),color);
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+0,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+1,2),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,3),color);
    strip.setPixelColor(coo(pos+1,4),color);
    strip.setPixelColor(coo(pos+0,4),color);
    strip.setPixelColor(coo(pos+2,4),color);
  }

  if(num=='0'){
    
    strip.setPixelColor(coo(pos+1,0),color);
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,2),color);
    strip.setPixelColor(coo(pos+0,3),color);

    strip.setPixelColor(coo(pos+2,1),color);
    strip.setPixelColor(coo(pos+2,2),color);
    strip.setPixelColor(coo(pos+2,3),color);
    
    strip.setPixelColor(coo(pos+1,4),color);
  }

  if(num==':'){
    strip.setPixelColor(coo(pos+0,1),color);
    strip.setPixelColor(coo(pos+0,3),color);
  }
  
}







