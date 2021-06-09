#include<iostream>
#include<ctype.h> //For using tolower() function

using namespace std;

int main()
{ char str[1000];
  cout<<"Enter some text (not more than 1000 characters)\n";
  fgets(str,1000,stdin); //We use fgets() instead of cin to take care of spaces in between words
  char *p;
  int cons,vow;
  cons=vow=0;
  p=str;
  while(*p!='\0')
  { switch(tolower(*p))
    { case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': vow++;
                break; 
      case 'b':
      case 'c':
      case 'd':
      case 'f':
      case 'g':
      case 'h':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z': cons++;
                break;
      default: break;          

    }
    p++;
  }
  cout<<"Number of vowels = "<< vow<<'\n';
  cout<<"Number of consonants = "<< cons<<'\n';
  return(0);
}

