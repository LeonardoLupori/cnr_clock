//*********************************************************************************************
//*** COO - Returns the index of an LED, based on the specified column and row position
//*********************************************************************************************
int coo(int col,int row){
    return ((row)*17)+col;
  }

//*********************************************************************************************
//*** OFF - Turn off all the LEDs (Does not show it!)
//*********************************************************************************************
void off(){
    for (uint16_t i=0; i < strip.numPixels(); i=i+1) {
        strip.setPixelColor(i, 0);       
      }
  }

//*********************************************************************************************
//*** BG - gives a uniform color to all the LEDs as a background
//*********************************************************************************************
void bg( uint32_t color)
{
    for (uint16_t i=0; i < strip.numPixels(); i=i+1) {
        strip.setPixelColor(i,color);       
      }
  }

//*********************************************************************************************
//*** checkDate - returns a bool (true or false) if the current date is equal to the input date (YYYY,MM,DD,hh,mm)
//*********************************************************************************************
bool checkDate(int year,int month,int day,int hour,int minute)
{
if(year==presentTime.Year() && month==presentTime.Month() && day==presentTime.Day() && hour==presentTime.Hour()&& minute==presentTime.Minute())
{
  return true;
  }else{
   return false;
  }
}

//*********************************************************************************************
//*** birthday - returns a bool (true or false) if the current date is equal to the input date (MM,DD,hh,mm)
//*********************************************************************************************
bool birthday(int month,int day)
{
  if(month==presentTime.Month() && day==presentTime.Day() && 0==presentTime.Minute()){
    return true;
  }else{
    return false;  
  }
}
//*********************************************************************************************
//*** linev - sets a vertical line at the specified position with the specified color
//*********************************************************************************************
  void linev(int pos,uint32_t color)
  {
     if(pos>=0 && pos<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
       }  
  }

   
//*********************************************************************************************
//*** textDrift - Makes a string of chars appearon the LEDs and drift
//*********************************************************************************************
void textDrift(String str, uint32_t color)
{ 
  int drawpos = 0;
  int tot =stringLength(str);
  off(); 
  for (int j=0; j<=tot+17; j++){
    drawpos = 17;
    for (int i = 0; i<str.length() ; i++)
    {
      drawpos += letter(str.charAt(i),(drawpos)-j,color)+1;
    }
    strip.show();
    delay(200);
    off();
  }
}




  
