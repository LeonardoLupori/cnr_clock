int charLength(char l){
  switch(l){
    // 1 spaces letters
    case '!':
    case ':':
    return 1;
    // 2 spacec letters
    case '(':
    case ')':
    return 2;
    // 3 spaces letters
    case 'c':
    case 'e':
    case 'i':
    case 't':
    case 'l':
    case 'u':
    case 'z':
    case 's':
    case ' ':
    return 3;
    // 5 spaces letters
    case 'y':
    case 'm':
    case 'v':
    case 'w':
    case 'x':
    return 5;
    // all the others letters
    default:
      return 4; 
  }
}

int stringLength(String str){
  int totLength = 0;
  for(int i=0; i<str.length();i++){
    totLength += charLength(str.charAt(i));
  }
  return totLength+str.length()-1; // add a space for all the letters except for the last one
}

int letter(char l,int pos,uint32_t color)
{
  int temp = 0;
  if(l=='h'){       //******** LETTER H ********
      temp =0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,2),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,2),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
      return 4;
   }else if (l=='a'){     //******** LETTER A ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,0),color);
        strip.setPixelColor(coo(pos+1,2),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,0),color);
        strip.setPixelColor(coo(pos+2,2),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
    }
    return 4;
    }else if (l=='y'){     //******** LETTER Y ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,1),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,2),color);
        strip.setPixelColor(coo(pos+2,3),color);
        strip.setPixelColor(coo(pos+2,4),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+3,1),color);
      }
      temp=4;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+4,0),color);
      }
      return 5;
    }else if (l=='f'){     //******** LETTER F ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,2),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,2),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);          
      }
      return 4;
    }else if (l=='c'){     //******** LETTER C ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
       } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,0),color);
        strip.setPixelColor(coo(pos+1,4),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,0),color);
        strip.setPixelColor(coo(pos+2,4),color);
      }
      return 3;
    }else if (l=='e'){     //******** LETTER E ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
       } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,0),color);
        strip.setPixelColor(coo(pos+1,2),color);
        strip.setPixelColor(coo(pos+1,4),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,0),color);
        strip.setPixelColor(coo(pos+2,4),color);
      }
      return 3;
    }else if (l=='i'){     //******** LETTER I ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      } 
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
      return 3;
    }else if (l=='t'){     //******** LETTER T ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,0),color);
        strip.setPixelColor(coo(pos+1,1),color);
        strip.setPixelColor(coo(pos+1,2),color);
        strip.setPixelColor(coo(pos+1,3),color);
        strip.setPixelColor(coo(pos+1,4),color);
      } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,0),color);
      }
      return 3;
    }else if (l=='d'){     //******** LETTER D ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
       } 
       temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,0),color);
        strip.setPixelColor(coo(pos+1,4),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,0),color);
        strip.setPixelColor(coo(pos+2,4),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+3,1),color);          
        strip.setPixelColor(coo(pos+3,2),color);          
        strip.setPixelColor(coo(pos+3,3),color);          
      }
      return 4;
    }else if (l=='l'){     //******** LETTER L ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
      } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,4),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,4),color);
      }
      return 3;
    }else if (l=='m'){     //******** LETTER M ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
      } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+1,1),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+2,2),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+3,1),color);
      }
      temp=4;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+4,0),color);
        strip.setPixelColor(coo(pos+4,1),color);
        strip.setPixelColor(coo(pos+4,2),color);
        strip.setPixelColor(coo(pos+4,3),color);
        strip.setPixelColor(coo(pos+4,4),color);
      } 
      return 5;  
    }else if (l=='n'){     //******** LETTER N ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,2),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      } 
      return 4;
    }else if (l=='o'){     //******** LETTER O ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+0,0),color);
        strip.setPixelColor(coo(pos+0,1),color);
        strip.setPixelColor(coo(pos+0,2),color);
        strip.setPixelColor(coo(pos+0,3),color);
        strip.setPixelColor(coo(pos+0,4),color);
       } 
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
        strip.setPixelColor(coo(pos+temp,4),color);
       } 
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,4),color);
        strip.setPixelColor(coo(pos+temp,0),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,4),color);
        strip.setPixelColor(coo(pos+temp,0),color);
      }
      return 4; 
    }else if (l=='p'){     //******** LETTER P ********
      temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
        temp=1;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,2),color);
        }
        temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,2),color);
        }
        temp=3;
        if(pos+temp>=0 && pos+temp<=16){
         // strip.setPixelColor(coo(pos+temp,0),color); 
          strip.setPixelColor(coo(pos+temp,1),color);
         // strip.setPixelColor(coo(pos+temp,2),color);          
        }
  
        return 4;
  
         }else if (l=='b'){     //******** LETTER B ********
          temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,2),color);
          strip.setPixelColor(coo(pos+0,3),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
  
          temp=1;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+1,0),color);
           strip.setPixelColor(coo(pos+1,2),color);
          strip.setPixelColor(coo(pos+1,4),color);
        }
        temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+2,0),color);
          strip.setPixelColor(coo(pos+2,2),color);
          strip.setPixelColor(coo(pos+2,4),color);
          strip.setPixelColor(coo(pos+2,1),color);
        }
        temp=3;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,3),color);
        }
        return 4;
         }else if (l=='u'){     //******** LETTER U ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,2),color);
          strip.setPixelColor(coo(pos+0,3),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
  
         temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
          }
          
         return 3; 
        }else if (l=='z'){     //******** LETTER Z ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,3),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
  
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,2),color);
            strip.setPixelColor(coo(pos+temp,4),color);
          }
          
          temp=2;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,1),color);
          }
          
         return 3; 
        }else if (l=='s'){     //******** LETTER S ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
  
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,2),color);
            strip.setPixelColor(coo(pos+temp,4),color);
          }
          
          temp=2;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
          
         return 3; 
        }else if (l=='r'){     //******** LETTER R ********
      temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
        temp=1;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,2),color);
        }
        temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,3),color);
        }
        temp=3;
        if(pos+temp>=0 && pos+temp<=16){
         // strip.setPixelColor(coo(pos+temp,0),color); 
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         
        }
  
        return 4;
  
         }else if (l=='q'){     //******** LETTER Q ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          //strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,2),color);
          strip.setPixelColor(coo(pos+0,3),color);
          //strip.setPixelColor(coo(pos+0,4),color);
         } 
  
         temp=3;
        if(pos+temp>=0 && pos+temp<=16){
          //strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
            strip.setPixelColor(coo(pos+temp,0),color);
          }
          temp=2;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
          
         return 4; 
        }else if (l=='v'){     //******** LETTER V ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
         } 
          temp=4;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
         } 
         temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
  
         
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,2),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
  
          temp=3;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,2),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
          
         return 5; 
        }else if (l=='w'){     //******** LETTER W ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,2),color);
         } 
          temp=4;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,2),color);
         } 
         temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,3),color);
         } 
         
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
          }
  
          temp=3;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,4),color);
            
          }
          
         return 5; 
        }else if (l=='x'){     //******** LETTER X ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
          temp=4;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
         
         temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,2),color);
         } 
         
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,1),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
  
          temp=3;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,1),color);
            strip.setPixelColor(coo(pos+temp,3),color);
          }
          
         return 5; 
        }else if (l=='k'){     //******** LETTER K ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
         
         temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,1),color);
           strip.setPixelColor(coo(pos+temp,3),color);
         } 
         
         temp=1;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,2),color);
          }
  
          temp=3;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,4),color);
          }
          
         return 4; 
        }else if (l=='j'){     //******** LETTER J ********
        temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,1),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,2),color);
          strip.setPixelColor(coo(pos+temp,4),color);
         } 
         
         temp=1;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
           strip.setPixelColor(coo(pos+temp,4),color);
         } 
         
         temp=3;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,0),color);
          }
  
          temp=0;
          if(pos+temp>=0 && pos+temp<=16){
            strip.setPixelColor(coo(pos+temp,0),color);
            strip.setPixelColor(coo(pos+temp,3),color);
            strip.setPixelColor(coo(pos+temp,4),color);
          }
          
         return 4; 
        }else if (l=='g'){     //******** LETTER G ********
        temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,2),color);
          strip.setPixelColor(coo(pos+0,3),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
  
         temp=1;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+1,0),color);
          strip.setPixelColor(coo(pos+1,4),color);
        }
        temp=2;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+2,0),color);
          strip.setPixelColor(coo(pos+2,4),color);
          strip.setPixelColor(coo(pos+2,2),color);
        }
         temp=3;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+temp,0),color);
          strip.setPixelColor(coo(pos+temp,3),color);
          strip.setPixelColor(coo(pos+temp,4),color);
          strip.setPixelColor(coo(pos+temp,2),color);
        }
       return 4;
     }else if (l==' '){     //******** space ********
       return 3;
     }else if (l=='!'){     //******** exclamation mark ********
      temp=0;
        if(pos+temp>=0 && pos+temp<=16){
          strip.setPixelColor(coo(pos+0,0),color);
          strip.setPixelColor(coo(pos+0,1),color);
          strip.setPixelColor(coo(pos+0,2),color);
          strip.setPixelColor(coo(pos+0,4),color);
         } 
       return 1;
     }else if (l=='?'){     //******** question mark ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
      }
      temp=2;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
      temp=3;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
      }
     return 4;
     }else if (l==':'){     //******** colon ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,3),color);
      }
     return 1;
     }else if (l=='('){     //******** parentheses ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
     return 2;
     }else if (l==')'){     //******** parentheses ********
      temp=0;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,0),color);
        strip.setPixelColor(coo(pos+temp,4),color);
      }
      temp=1;
      if(pos+temp>=0 && pos+temp<=16){
        strip.setPixelColor(coo(pos+temp,1),color);
        strip.setPixelColor(coo(pos+temp,2),color);
        strip.setPixelColor(coo(pos+temp,3),color);
      }
     return 2;
     }
  
        
}
