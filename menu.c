#include <iostream.h>	//library included for in and out-put
#include <conio.h>	//library included for clearing screen
#include <string.h>	//library included for converting strings
int main()	//main function declaration
{
  char m[2];	//main menu input variable declaration
  do	//main menu infinite loop beginning (in case of incorrect keystroke)
   {
    clrscr();	//clear screen
    cout<<"\n\t1. Convert from Decimal\n\t2. Convert from Hexadecimal\n\t3. Convert from Octal\n\t4. Convert from Binary\n\t5. Exit\n\nInput the number corresponding your choice : ";		//main menu screen output choice
    cin>>m;	//main menu input variable defined here by user
    if(m[0] == '1')	//if the user enters '1' it will be presented with decimal conversion menu
     {
       clrscr();
       cout<<"No more than 10 numbers...\n\n\tDecimal ";
       int d;	//decimal input variable declaration
       cin>>d;	//user inputs decimal value for conversion
       if(d<0)	//checks if the decimal input value is below 0 (not including 0)
        {
          clrscr();
          cout<<"\n\n\tDecimal "<<d<<" should not be converted in this program....\n\t-it's too negative!";	//the decimal input value below 0 is dismissed
        }
       else	//if the decimal input value is greater than (or equals) 0
        {
          int dtoh(d-((d/16)*16)), dtoha((d/16)-((d/256)*16)), dtohb((d/256)-((d/4096)*16)), dtohc((d/4096)-((d/65536)*16)), dtohd((d/65536)-((d/1048576)*16)), dtohe((d/1048576)-((d/16777216)*16)), dtohf((d/16777216)-((d/268435456)*16)), dtohg((d/268435456)-((d/4294967296)*16));		//decimal to hexadecimal calculation
          const dectocha(55);	//constant used to add to hexadecimal values for conversion into ASCII characters
          clrscr();
          cout<<"\n\n\tDecimal "<<d<<" equals ";
          if(dtohg>=0 && dtohg<=9)	//start of routine used to determine what to convert to characters and what not to
           {
             cout<<dtohg;	//the left most number is a number and should be output as-is
           }
          else if(dtohg>=10 && dtohg<=15)
           {
             cout<<(char)(dtohg + dectocha);	//the left most number is a character and should be output as a character
           }
          if(dtohf>=0 && dtohf<=9)
           {
             cout<<dtohf<<" ";
           }
          else if(dtohf>=10 && dtohf<=15)
           {
             cout<<(char)(dtohf + dectocha)<<" ";
           }
          if(dtohe>=0 && dtohe<=9)
           {
             cout<<dtohe;
           }
          else if(dtohe>=10 && dtohe<=15)
           {
             cout<<(char)(dtohe + dectocha);
           }
          if(dtohd>=0 && dtohd<=9)
           {
             cout<<dtohd<<" ";
           }
          else if(dtohd>=10 && dtohd<=15)
           {
             cout<<(char)(dtohd + dectocha)<<" ";
           }
          if(dtohc>=0 && dtohc<=9)
           {
             cout<<dtohc;
           }
          else if(dtohc>=10 && dtohc<=15)
           {
             cout<<(char)(dtohc + dectocha);
           }
          if(dtohb>=0 && dtohb<=9)
           {
             cout<<dtohb<<" ";
           }
          else if(dtohb>=10 && dtohb<=15)
           {
             cout<<(char)(dtohb + dectocha)<<" ";
           }
          if(dtoha>=0 && dtoha<=9)
           {
             cout<<dtoha;
           }
          else if(dtoha>=10 && dtoha<=15)
           {
             cout<<(char)(dtoha + dectocha);
           }
          if(dtoh>=0 && dtoh<=9)
           {
             cout<<dtoh<<" ";
           }
          else if(dtoh>=10 && dtoh<=15)
           {
             cout<<(char)(dtoh + dectocha)<<" ";
           }		//end of routine used to determine what to convert to characters and what not to
          cout<<"in hexadecimal.";
          int dtoo(d-((d/8)*8)), dtooa((d/8)-((d/64)*8)), dtoob((d/64)-((d/512)*8)), dtooc((d/512)-((d/4096)*8)), dtood((d/4096)-((d/32768)*8)), dtooe((d/32768)-((d/262144)*8)), dtoof((d/262144)-((d/2097152)*8)), dtoog((d/2097152)-((d/16777216)*8)), dtooh((d/16777216)-((d/134217728)*8)), dtooi((d/134217728)-((d/1073741824)*8)), dtooj((d/1073741824)-((d/8589934592)*8));	//decimal to octal calculation
          cout<<"\n\n\tDecimal "<<d<<" equals "<<dtooj<<dtooi<<dtooh<<dtoog<<dtoof<<dtooe<<dtood<<dtooc<<dtoob<<dtooa<<dtoo<<" in octal.";	//outputs decimal to octal result
          int dtob(d-((d/2)*2)), dtoba((d/2)-((d/4)*2)), dtobb((d/4)-((d/8)*2)), dtobc((d/8)-((d/16)*2)), dtobd((d/16)-((d/32)*2)), dtobe((d/32)-((d/64)*2)), dtobf((d/64)-((d/128)*2)), dtobg((d/128)-((d/256)*2)), dtobh((d/256)-((d/512)*2)), dtobi((d/512)-((d/1024)*2)), dtobj((d/1024)-((d/2048)*2)), dtobk((d/2048)-((d/4096)*2)), dtobl((d/4096)-((d/8192)*2)), dtobm((d/8192)-((d/16384)*2)), dtobn((d/16384)-((d/32768)*2)), dtobo((d/32768)-((d/65536)*2)), dtobp((d/65536)-((d/131072)*2)), dtobq((d/131072)-((d/262144)*2)), dtobr((d/262144)-((d/524288)*2)), dtobs((d/524288)-((d/1048576)*2)), dtobt((d/1048576)-((d/2097152)*2)), dtobu((d/2097152)-((d/4194304)*2)), dtobv((d/4194304)-((d/8388608)*2)), dtobw((d/8388608)-((d/16777216)*2)), dtobx((d/16777216)-((d/33554432)*2)), dtoby((d/33554432)-((d/67108864)*2)), dtobz((d/67108864)-((d/134217728)*2)), dtobza((d/134217728)-((d/268435456)*2)), dtobzb((d/268435456)-((d/536870912)*2));	//decimal to binary calculation
          cout<<"\n\n\tDecimal "<<d<<" equals "<<dtobzb<<dtobza<<dtobz<<dtoby<<dtobx<<dtobw<<dtobv<<dtobu<<dtobt<<dtobs<<dtobr<<dtobq<<dtobp<<dtobo<<dtobn<<dtobm<<dtobl<<dtobk<<dtobj<<dtobi<<dtobh<<dtobg<<dtobf<<dtobe<<dtobd<<dtobc<<dtobb<<dtoba<<dtob<<" in binary.";	//outputs decimal to binary result
        }
        cout<<"\n\n\n\n\n\n";
        char md[2];	//menu choice variable in decimal conversion submenu
        do		//loop to force user to answer whether or it wants to quit
         {
           cout<<"Do you want to exit? ";		//asks if user wants to quit
           cin>>md;	//user inputs...
           if(md[0] =='Y' || md[0] =='J' || md[0] =='y' || md[0] =='j')	//if user entered a positive answer
            {
              return 0;	 	//it will return the value 0 to main function and therefore exit
            }
           else if(md[0] =='N' || md[0] =='n')	//if user entered a negative answer
            {
              break;		//it will break up the routine of the force loop and the decimal conversion menu and rerun main menu routine
            }
         }while(md[0] !='Y' || md[0] !='N' || md[0] !='J' || md[0] !='y' || md[0] !='n' || md[0] !='j');	//end of loop to force user to answer whether or it wants to quit
     }
    else if(m[0] == '2')	//hexadecimal conversion menu, if user entered the value '2' in main menu
     {
       clrscr();
       cout<<"No more than 8 numbers...\n\n\tHexadecimal ";
       char h[9];
       int hx;
       cin>>h;
       hx = strlen(h);
       strupr(h);
       int ha;int hb;int hc;int hd;int he;int hf;int hg;int hh;
       if(h[0] == 'A')
        {
          ha = 10;
        }
       else if(h[0] == 'B')
        {
          ha = 11;
        }
       else if(h[0] == 'C')
        {
          ha = 12;
        }
       else if(h[0] == 'D')
        {
          ha = 13;
        }
       else if(h[0] == 'E')
        {
          ha = 14;
        }
       else if(h[0] == 'F')
        {
          ha = 15;
        }
       else if(h[0] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          ha = h[0]-48;
        }
       if(h[1] == 'A')
        {
          hb = 10;
        }
       else if(h[1] == 'B')
        {
          hb = 11;
        }
       else if(h[1] == 'C')
        {
          hb = 12;
        }
       else if(h[1] == 'D')
        {
          hb = 13;
        }
       else if(h[1] == 'E')
        {
          hb = 14;
        }
       else if(h[1] == 'F')
        {
          hb = 15;
        }
       else if(h[1] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hb = h[1]-48;
        }
       if(h[2] == 'A')
        {
          hc = 10;
        }
       else if(h[2] == 'B')
        {
          hc = 11;
        }
       else if(h[2] == 'C')
        {
          hc = 12;
        }
       else if(h[2] == 'D')
        {
          hc = 13;
        }
       else if(h[2] == 'E')
        {
          hc = 14;
        }
       else if(h[2] == 'F')
        {
          hc = 15;
        }
       else if(h[2] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hc = h[2]-48;
        }
       if(h[3] == 'A')
        {
          hd = 10;
        }
       else if(h[3] == 'B')
        {
          hd = 11;
        }
       else if(h[3] == 'C')
        {
          hd = 12;
        }
       else if(h[3] == 'D')
        {
          hd = 13;
        }
       else if(h[3] == 'E')
        {
          hd = 14;
        }
       else if(h[3] == 'F')
        {
          hd = 15;
        }
       else if(h[3] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hd = h[3]-48;
        }
       if(h[4] == 'A')
        {
          he = 10;
        }
       else if(h[4] == 'B')
        {
          he = 11;
        }
       else if(h[4] == 'C')
        {
          he = 12;
        }
       else if(h[4] == 'D')
        {
          he = 13;
        }
       else if(h[4] == 'E')
        {
          he = 14;
        }
       else if(h[4] == 'F')
        {
          he = 15;
        }
       else if(h[4] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          he = h[4]-48;
        }
       if(h[5] == 'A')
        {
          hf = 10;
        }
       else if(h[5] == 'B')
        {
          hf = 11;
        }
       else if(h[5] == 'C')
        {
          hf = 12;
        }
       else if(h[5] == 'D')
        {
          hf = 13;
        }
       else if(h[5] == 'E')
        {
          hf = 14;
        }
       else if(h[5] == 'F')
        {
          hf = 15;
        }
       else if(h[5] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hf = h[5]-48;
        }
       if(h[6] == 'A')
        {
          hg = 10;
        }
       else if(h[6] == 'B')
        {
          hg = 11;
        }
       else if(h[6] == 'C')
        {
          hg = 12;
        }
       else if(h[6] == 'D')
        {
          hg = 13;
        }
       else if(h[6] == 'E')
        {
          hg = 14;
        }
       else if(h[6] == 'F')
        {
          hg = 15;
        }
       else if(h[6] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hg = h[6]-48;
        }
       if(h[7] == 'A')
        {
          hh = 10;
        }
       else if(h[7] == 'B')
        {
          hh = 11;
        }
       else if(h[7] == 'C')
        {
          hh = 12;
        }
       else if(h[7] == 'D')
        {
          hh = 13;
        }
       else if(h[7] == 'E')
        {
          hh = 14;
        }
       else if(h[7] == 'F')
        {
          hh = 15;
        }
       else if(h[7] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
        {
          hh = h[7]-48;
        }
       int hz;
       if(hx == 1)
        {
          hz = (ha*1);
        }
       else if(hx == 2)
        {
          hz = ((ha*16)+(hb*1));
        }
       else if(hx == 3)
        {
          hz = ((ha*256)+(hb*16)+(hc*1));
        }
       else if(hx == 4)
        {
          hz = ((ha*4096)+(hb*256)+(hc*16)+(hd*1));
        }
       else if(hx == 5)
        {
          hz = ((ha*65536)+(hb*4096)+(hc*256)+(hd*16)+(he*1));
        }
       else if(hx == 6)
        {
          hz = ((ha*1048576)+(hb*65536)+(hc*4096)+(hd*256)+(he*16)+(hf*1));
        }
       else if(hx == 7)
        {
          hz = ((ha*16777216)+(hb*1048576)+(hc*65536)+(hd*4096)+(he*256)+(hf*16)+(hg*1));
        }
       else if(hx == 8)
        {
          hz = ((ha*268435456)+(hb*16777216)+(hc*1048576)+(hd*65536)+(he*4096)+(hf*256)+(hg*16)+(hh*1));
        }
       clrscr();
       cout<<"\n\n\tHexadecimal "<<h<<" equals "<<hz<<" in decimal.";
       int htoo(hz-((hz/8)*8)), htooa((hz/8)-((hz/64)*8)), htoob((hz/64)-((hz/512)*8)), htooc((hz/512)-((hz/4096)*8)), htood((hz/4096)-((hz/32768)*8)), htooe((hz/32768)-((hz/262144)*8)), htoof((hz/262144)-((hz/2097152)*8)), htoog((hz/2097152)-((hz/16777216)*8)), htooh((hz/16777216)-((hz/134217728)*8)), htooi((hz/134217728)-((hz/1073741824)*8)), htooj((hz/1073741824)-((hz/8589934592)*8));
       cout<<"\n\n\tHexadecimal "<<h<<" equals "<<htooj<<htooi<<htooh<<htoog<<htoof<<htooe<<htood<<htooc<<htoob<<htooa<<htoo<<" in octal.";
       int htob(hz-((hz/2)*2)), htoba((hz/2)-((hz/4)*2)), htobb((hz/4)-((hz/8)*2)), htobc((hz/8)-((hz/16)*2)), htobd((hz/16)-((hz/32)*2)), htobe((hz/32)-((hz/64)*2)), htobf((hz/64)-((hz/128)*2)), htobg((hz/128)-((hz/256)*2)), htobh((hz/256)-((hz/512)*2)), htobi((hz/512)-((hz/1024)*2)), htobj((hz/1024)-((hz/2048)*2)), htobk((hz/2048)-((hz/4096)*2)), htobl((hz/4096)-((hz/8192)*2)), htobm((hz/8192)-((hz/16384)*2)), htobn((hz/16384)-((hz/32768)*2)), htobo((hz/32768)-((hz/65536)*2)), htobp((hz/65536)-((hz/131072)*2)), htobq((hz/131072)-((hz/262144)*2)), htobr((hz/262144)-((hz/524288)*2)), htobs((hz/524288)-((hz/1048576)*2)), htobt((hz/1048576)-((hz/2097152)*2)), htobu((hz/2097152)-((hz/4194304)*2)), htobv((hz/4194304)-((hz/8388608)*2)), htobw((hz/8388608)-((hz/16777216)*2)), htobx((hz/16777216)-((hz/33554432)*2)), htoby((hz/33554432)-((hz/67108864)*2)), htobz((hz/67108864)-((hz/134217728)*2)), htobza((hz/134217728)-((hz/268435456)*2)), htobzb((hz/268435456)-((hz/536870912)*2));
       cout<<"\n\n\tHexadecimal "<<h<<" equals "<<htobzb<<htobza<<htobz<<htoby<<htobx<<htobw<<htobv<<htobu<<htobt<<htobs<<htobr<<htobq<<htobp<<htobo<<htobn<<htobm<<htobl<<htobk<<htobj<<htobi<<htobh<<htobg<<htobf<<htobe<<htobd<<htobc<<htobb<<htoba<<htob<<" in binary.";
       cout<<"\n\n\n\n\n\n";
       char mh[2];
       do
        {
          cout<<"Do you want to exit? ";
          cin>>mh;
          if(mh[0] =='y' || mh[0] =='Y' || mh[0] =='j' || mh[0] =='J')
           {
             return 0;
           }
          else if(mh[0] =='n' || mh[0] =='N')
           {
             break;
           }
        }while(mh[0] !='y' || mh[0] !='Y' || mh[0] !='n' || mh[0] !='N' || mh[0] !='j' || mh[0] !='J');
     }
    else if(m[0] == '3')
     {
       clrscr();
       cout<<"No more than 11 numbers...\n\n\tOctal ";
       char o[12];
       cin>>o;
       int oa;int ob;int oc;int od;int oe;int of;int og;int oh;int oi;int oj;int ok;int ox;int oz;
       ox = strlen(o);
       if(o[0] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oa = o[0]-48;
        }
       if(o[1] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          ob = o[1]-48;
        }
       if(o[2] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oc = o[2]-48;
        }
       if(o[3] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          od = o[3]-48;
        }
       if(o[4] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oe = o[4]-48;
        }
       if(o[5] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          of = o[5]-48;
        }
       if(o[6] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          og = o[6]-48;
        }
       if(o[7] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oh = o[7]-48;
        }
       if(o[8] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oi = o[8]-48;
        }
       if(o[9] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          oj = o[9]-48;
        }
       if(o[10] == '1' || '2' || '3' || '4' || '5' || '6' || '7')
        {
          ok = o[10]-48;
        }
       if(ox == 1)
        {
          oz = (oa*1);
        }
       else if(ox == 2)
        {
          oz = ((oa*8)+(ob*1));
        }
       else if(ox == 3)
        {
          oz = ((oa*64)+(ob*8)+(oc*1));
        }
       else if(ox == 4)
        {
          oz = ((oa*512)+(ob*64)+(oc*8)+(od*1));
        }
       else if(ox == 5)
        {
          oz = ((oa*4096)+(ob*512)+(oc*64)+(od*8)+(oe*1));
        }
       else if(ox == 6)
        {
          oz = ((oa*32768)+(ob*4096)+(oc*512)+(od*64)+(oe*8)+(of*1));
        }
       else if(ox == 7)
        {
          oz = ((oa*262144)+(ob*32768)+(oc*4096)+(od*512)+(oe*64)+(of*8)+(og*1));
        }
       else if(ox == 8)
        {
          oz = ((oa*2097152)+(ob*262144)+(oc*32768)+(od*4096)+(oe*512)+(of*64)+(og*8)+(oh*1));
        }
       else if(ox == 9)
        {
          oz = ((oa*16777216)+(ob*2097152)+(oc*262144)+(od*32768)+(oe*4096)+(of*512)+(og*64)+(oh*8)+(oi*1));
        }
       else if(ox == 10)
        {
          oz = ((oa*134217728)+(ob*16777216)+(oc*2097152)+(od*262144)+(oe*32768)+(of*4096)+(og*512)+(oh*64)+(oi*8)+(oj*1));
        }
       else if(ox == 11)
        {
          oz = ((oa*1073741824)+(ob*134217728)+(oc*16777216)+(od*2097152)+(oe*262144)+(of*32768)+(og*4096)+(oh*512)+(oi*64)+(oj*8)+(ok*1));
        }
       clrscr();
       cout<<"\n\n\tOctal "<<o<<" equals "<<oz<<" in decimal.";
       int otoh(oz-((oz/16)*16)), otoha((oz/16)-((oz/256)*16)), otohb((oz/256)-((oz/4096)*16)), otohc((oz/4096)-((oz/65536)*16)), otohd((oz/65536)-((oz/1048576)*16)), otohe((oz/1048576)-((oz/16777216)*16)), otohf((oz/16777216)-((oz/268435456)*16)), otohg((oz/268435456)-((oz/4294967296)*16));
       const octocha(55);
       cout<<"\n\n\tOctal "<<o<<" equals ";
       if(otohg>=0 && otohg<=9)
        {
          cout<<otohg;
        }
       else if(otohg>=10 && otohg<=15)
        {
          cout<<(char)(otohg + octocha);
        }
       if(otohf>=0 && otohf<=9)
        {
          cout<<otohf<<" ";
        }
       else if(otohf>=10 && otohf<=15)
        {
          cout<<(char)(otohf + octocha)<<" ";
        }
       if(otohe>=0 && otohe<=9)
        {
          cout<<otohe;
        }
       else if(otohe>=10 && otohe<=15)
        {
          cout<<(char)(otohe + octocha);
        }
       if(otohd>=0 && otohd<=9)
        {
          cout<<otohd<<" ";
        }
       else if(otohd>=10 && otohd<=15)
        {
          cout<<(char)(otohd + octocha)<<" ";
        }
       if(otohc>=0 && otohc<=9)
        {
          cout<<otohc;
        }
       else if(otohc>=10 && otohc<=15)
        {
          cout<<(char)(otohc + octocha);
        }
       if(otohb>=0 && otohb<=9)
        {
          cout<<otohb<<" ";
        }
       else if(otohb>=10 && otohb<=15)
        {
          cout<<(char)(otohb + octocha)<<" ";
        }
       if(otoha>=0 && otoha<=9)
        {
          cout<<otoha;
        }
       else if(otoha>=10 && otoha<=15)
        {
          cout<<(char)(otoha + octocha);
        }
       if(otoh>=0 && otoh<=9)
        {
          cout<<otoh<<" ";
        }
       else if(otoh>=10 && otoh<=15)
        {
          cout<<(char)(otoh + octocha)<<" ";
        }
       cout<<"in hexadecimal.";
       int otob(oz-((oz/2)*2)), otoba((oz/2)-((oz/4)*2)), otobb((oz/4)-((oz/8)*2)), otobc((oz/8)-((oz/16)*2)), otobd((oz/16)-((oz/32)*2)), otobe((oz/32)-((oz/64)*2)), otobf((oz/64)-((oz/128)*2)), otobg((oz/128)-((oz/256)*2)), otobh((oz/256)-((oz/512)*2)), otobi((oz/512)-((oz/1024)*2)), otobj((oz/1024)-((oz/2048)*2)), otobk((oz/2048)-((oz/4096)*2)), otobl((oz/4096)-((oz/8192)*2)), otobm((oz/8192)-((oz/16384)*2)), otobn((oz/16384)-((oz/32768)*2)), otobo((oz/32768)-((oz/65536)*2)), otobp((oz/65536)-((oz/131072)*2)), otobq((oz/131072)-((oz/262144)*2)), otobr((oz/262144)-((oz/524288)*2)), otobs((oz/524288)-((oz/1048576)*2)), otobt((oz/1048576)-((oz/2097152)*2)), otobu((oz/2097152)-((oz/4194304)*2)), otobv((oz/4194304)-((oz/8388608)*2)), otobw((oz/8388608)-((oz/16777216)*2)), otobx((oz/16777216)-((oz/33554432)*2)), otoby((oz/33554432)-((oz/67108864)*2)), otobz((oz/67108864)-((oz/134217728)*2)), otobza((oz/134217728)-((oz/268435456)*2)), otobzb((oz/268435456)-((oz/536870912)*2));
       cout<<"\n\n\tOctal "<<o<<" equals "<<otobzb<<otobza<<otobz<<otoby<<otobx<<otobw<<otobv<<otobu<<otobt<<otobs<<otobr<<otobq<<otobp<<otobo<<otobn<<otobm<<otobl<<otobk<<otobj<<otobi<<otobh<<otobg<<otobf<<otobe<<otobd<<otobc<<otobb<<otoba<<otob<<" in binary.";
       cout<<"\n\n\n\n\n\n";
       char mo[2];
       do
        {
          cout<<"Do you want to exit? ";
          cin>>mo;
          if(mo[0] =='Y' || mo[0] =='J' || mo[0] =='y' || mo[0] =='j')
           {
             return 0;
           }
          else if(mo[0] =='N' || mo[0] =='n')
           {
             break;
           }
        }while(mo[0] !='Y' || mo[0] !='N' || mo[0] !='J' || mo[0] !='y' || mo[0] !='n' || mo[0] !='j');
     }
    else if(m[0] == '4')
     {
       clrscr();
       cout<<"No more than 31 numbers...\n\n\tBinary ";
       char b[32];
       cin>>b;
       int ba;int bb;int bc;int bd;int be;int bf;int bg;int bh;int bi;int bj;int bk;int bl;int bm;int bn;int bo;int bp;int bq;int br;int bs;int bt;int bu;int bv;int bw;int bx;int by;int bz;int baa;int bab;int bac;int bad;int bae;int blen;int bdec;
       blen = strlen(b);
       if(b[0] == '0' || '1')
        {
          ba = b[0]-48;
        }
       if(b[1] == '0' || '1')
        {
          bb = b[1]-48;
        }
       if(b[2] == '0' || '1')
        {
          bc = b[2]-48;
        }
       if(b[3] == '0' || '1')
        {
          bd = b[3]-48;
        }
       if(b[4] == '0' || '1')
        {
          be = b[4]-48;
        }
       if(b[5] == '0' || '1')
        {
          bf = b[5]-48;
        }
       if(b[6] == '0' || '1')
        {
          bg = b[6]-48;
        }
       if(b[7] == '0' || '1')
        {
          bh = b[7]-48;
        }
       if(b[8] == '0' || '1')
        {
          bi = b[8]-48;
        }
       if(b[9] == '0' || '1')
        {
          bj = b[9]-48;
        }
       if(b[10] == '0' || '1')
        {
          bk = b[10]-48;
        }
       if(b[11] == '0' || '1')
        {
          bl = b[11]-48;
        }
       if(b[12] == '0' || '1')
        {
          bm = b[12]-48;
        }
       if(b[13] == '0' || '1')
        {
          bn = b[13]-48;
        }
       if(b[14] == '0' || '1')
        {
          bo = b[14]-48;
        }
       if(b[15] == '0' || '1')
        {
          bp = b[15]-48;
        }
       if(b[16] == '0' || '1')
        {
          bq = b[16]-48;
        }
       if(b[17] == '0' || '1')
        {
          br = b[17]-48;
        }
       if(b[18] == '0' || '1')
        {
          bs = b[18]-48;
        }
       if(b[19] == '0' || '1')
        {
          bt = b[19]-48;
        }
       if(b[20] == '0' || '1')
        {
          bu = b[20]-48;
        }
       if(b[21] == '0' || '1')
        {
          bv = b[21]-48;
        }
       if(b[22] == '0' || '1')
        {
          bw = b[22]-48;
        }
       if(b[23] == '0' || '1')
        {
          bx = b[23]-48;
        }
       if(b[24] == '0' || '1')
        {
          by = b[24]-48;
        }
       if(b[25] == '0' || '1')
        {
          bz = b[25]-48;
        }
       if(b[26] == '0' || '1')
        {
          baa = b[26]-48;
        }
       if(b[27] == '0' || '1')
        {
          bab = b[27]-48;
        }
       if(b[28] == '0' || '1')
        {
          bac = b[28]-48;
        }
       if(b[29] == '0' || '1')
        {
          bad = b[29]-48;
        }
       if(b[30] == '0' || '1')
        {
          bae = b[30]-48;
        }
       if(blen == 1)
        {
          bdec = (ba*1);
        }
       else if(blen == 2)
        {
          bdec = ((ba*2)+(bb*1));
        }
       else if(blen == 3)
        {
          bdec = ((ba*4)+(bb*2)+(bc*1));
        }
       else if(blen == 4)
        {
          bdec = ((ba*8)+(bb*4)+(bc*2)+(bd*1));
        }
       else if(blen == 5)
        {
          bdec = ((ba*16)+(bb*8)+(bc*4)+(bd*2)+(be*1));
        }
       else if(blen == 6)
        {
          bdec = ((ba*32)+(bb*16)+(bc*8)+(bd*4)+(be*2)+(bf*1));
        }
       else if(blen == 7)
        {
          bdec = ((ba*64)+(bb*32)+(bc*16)+(bd*8)+(be*4)+(bf*2)+(bg*1));
        }
       else if(blen == 8)
        {
          bdec = ((ba*128)+(bb*64)+(bc*32)+(bd*16)+(be*8)+(bf*4)+(bg*2)+(bh*1));
        }
       else if(blen == 9)
        {
          bdec = ((ba*256)+(bb*128)+(bc*64)+(bd*32)+(be*16)+(bf*8)+(bg*4)+(bh*2)+(bi*1));
        }
       else if(blen == 10)
        {
          bdec = ((ba*512)+(bb*256)+(bc*128)+(bd*64)+(be*32)+(bf*16)+(bg*8)+(bh*4)+(bi*2)+(bj*1));
        }
       else if(blen == 11)
        {
          bdec = ((ba*1024)+(bb*512)+(bc*256)+(bd*128)+(be*64)+(bf*32)+(bg*16)+(bh*8)+(bi*4)+(bj*2)+(bk*1));
        }
       else if(blen == 12)
        {
          bdec = ((ba*2048)+(bb*1024)+(bc*512)+(bd*256)+(be*128)+(bf*64)+(bg*32)+(bh*16)+(bi*8)+(bj*4)+(bk*2)+(bl*1));
        }
       else if(blen == 13)
        {
          bdec = ((ba*4096)+(bb*2048)+(bc*1024)+(bd*512)+(be*256)+(bf*128)+(bg*64)+(bh*32)+(bi*16)+(bj*8)+(bk*4)+(bl*2)+(bm*1));
        }
       else if(blen == 14)
        {
          bdec = ((ba*8192)+(bb*4096)+(bc*2048)+(bd*1024)+(be*512)+(bf*256)+(bg*128)+(bh*64)+(bi*32)+(bj*16)+(bk*8)+(bl*4)+(bm*2)+(bn*1));
        }
       else if(blen == 15)
        {
          bdec = ((ba*16384)+(bb*8192)+(bc*4096)+(bd*2048)+(be*1024)+(bf*512)+(bg*256)+(bh*128)+(bi*64)+(bj*32)+(bk*16)+(bl*8)+(bm*4)+(bn*2)+(bo*1));
        }
       else if(blen == 16)
        {
          bdec = ((ba*32768)+(bb*16384)+(bc*8192)+(bd*4096)+(be*2048)+(bf*1024)+(bg*512)+(bh*256)+(bi*128)+(bj*64)+(bk*32)+(bl*16)+(bm*8)+(bn*4)+(bo*2)+(bp*1));
        }
       else if(blen == 17)
        {
          bdec = ((ba*65536)+(bb*32768)+(bc*16384)+(bd*8192)+(be*4096)+(bf*2048)+(bg*1024)+(bh*512)+(bi*256)+(bj*128)+(bk*64)+(bl*32)+(bm*16)+(bn*8)+(bo*4)+(bp*2)+(bq*1));
        }
       else if(blen == 18)
        {
          bdec = ((ba*131072)+(bb*65536)+(bc*32768)+(bd*16384)+(be*8192)+(bf*4096)+(bg*2048)+(bh*1024)+(bi*512)+(bj*256)+(bk*128)+(bl*64)+(bm*32)+(bn*16)+(bo*8)+(bp*4)+(bq*2)+(br*1));
        }
       else if(blen == 19)
        {
          bdec = ((ba*262144)+(bb*131072)+(bc*65536)+(bd*32768)+(be*16384)+(bf*8192)+(bg*4096)+(bh*2048)+(bi*1024)+(bj*512)+(bk*256)+(bl*128)+(bm*64)+(bn*32)+(bo*16)+(bp*8)+(bq*4)+(br*2)+(bs*1));
        }
       else if(blen == 20)
        {
          bdec = ((ba*524288)+(bb*262144)+(bc*131072)+(bd*65536)+(be*32768)+(bf*16384)+(bg*8192)+(bh*4096)+(bi*2048)+(bj*1024)+(bk*512)+(bl*256)+(bm*128)+(bn*64)+(bo*32)+(bp*16)+(bq*8)+(br*4)+(bs*2)+(bt*1));
        }
       else if(blen == 21)
        {
          bdec = ((ba*1048576)+(bb*524288)+(bc*262144)+(bd*131072)+(be*65536)+(bf*32768)+(bg*16384)+(bh*8192)+(bi*4096)+(bj*2048)+(bk*1024)+(bl*512)+(bm*256)+(bn*128)+(bo*64)+(bp*32)+(bq*16)+(br*8)+(bs*4)+(bt*2)+(bu*1));
        }
       else if(blen == 22)
        {
          bdec = ((ba*2097152)+(bb*1048576)+(bc*524288)+(bd*262144)+(be*131072)+(bf*65536)+(bg*32768)+(bh*16384)+(bi*8192)+(bj*4096)+(bk*2048)+(bl*1024)+(bm*512)+(bn*256)+(bo*128)+(bp*64)+(bq*32)+(br*16)+(bs*8)+(bt*4)+(bu*2)+(bv*1));
        }
       else if(blen == 23)
        {
          bdec = ((ba*4194304)+(bb*2097152)+(bc*1048576)+(bd*524288)+(be*262144)+(bf*131072)+(bg*65536)+(bh*32768)+(bi*16384)+(bj*8192)+(bk*4096)+(bl*2048)+(bm*1024)+(bn*512)+(bo*256)+(bp*128)+(bq*64)+(br*32)+(bs*16)+(bt*8)+(bu*4)+(bv*2)+(bw*1));
        }
       else if(blen == 24)
        {
          bdec = ((ba*8388608)+(bb*4194304)+(bc*2097152)+(bd*1048576)+(be*524288)+(bf*262144)+(bg*131072)+(bh*65536)+(bi*32768)+(bj*16384)+(bk*8192)+(bl*4096)+(bm*2048)+(bn*1024)+(bo*512)+(bp*256)+(bq*128)+(br*64)+(bs*32)+(bt*16)+(bu*8)+(bv*4)+(bw*2)+(bx*1));
        }
       else if(blen == 25)
        {
          bdec = ((ba*16777216)+(bb*8388608)+(bc*4194304)+(bd*2097152)+(be*1048576)+(bf*524288)+(bg*262144)+(bh*131072)+(bi*65536)+(bj*32768)+(bk*16384)+(bl*8192)+(bm*4096)+(bn*2048)+(bo*1024)+(bp*512)+(bq*256)+(br*128)+(bs*64)+(bt*32)+(bu*16)+(bv*8)+(bw*4)+(bx*2)+(by*1));
        }
       else if(blen == 26)
        {
          bdec = ((ba*33554432)+(bb*16777216)+(bc*8388608)+(bd*4194304)+(be*2097152)+(bf*1048576)+(bg*524288)+(bh*262144)+(bi*131072)+(bj*65536)+(bk*32768)+(bl*16384)+(bm*8192)+(bn*4096)+(bo*2048)+(bp*1024)+(bq*512)+(br*256)+(bs*128)+(bt*64)+(bu*32)+(bv*16)+(bw*8)+(bx*4)+(by*2)+(bz*1));
        }
       else if(blen == 27)
        {
          bdec = ((ba*67108864)+(bb*33554432)+(bc*16777216)+(bd*8388608)+(be*4194304)+(bf*2097152)+(bg*1048576)+(bh*524288)+(bi*262144)+(bj*131072)+(bk*65536)+(bl*32768)+(bm*16384)+(bn*8192)+(bo*4096)+(bp*2048)+(bq*1024)+(br*512)+(bs*256)+(bt*128)+(bu*64)+(bv*32)+(bw*16)+(bx*8)+(by*4)+(bz*2)+(baa*1));
        }
       else if(blen == 28)
        {
          bdec = ((ba*134217728)+(bb*67108864)+(bc*33554432)+(bd*16777216)+(be*8388608)+(bf*4194304)+(bg*2097152)+(bh*1048576)+(bi*524288)+(bj*262144)+(bk*131072)+(bl*65536)+(bm*32768)+(bn*16384)+(bo*8192)+(bp*4096)+(bq*2048)+(br*1024)+(bs*512)+(bt*256)+(bu*128)+(bv*64)+(bw*32)+(bx*16)+(by*8)+(bz*4)+(baa*2)+(bab*1));
        }
       else if(blen == 29)
        {
          bdec = ((ba*268435456)+(bb*134217728)+(bc*67108864)+(bd*33554432)+(be*16777216)+(bf*8388608)+(bg*4194304)+(bh*2097152)+(bi*1048576)+(bj*524288)+(bk*262144)+(bl*131072)+(bm*65536)+(bn*32768)+(bo*16384)+(bp*8192)+(bq*4096)+(br*2048)+(bs*1024)+(bt*512)+(bu*256)+(bv*128)+(bw*64)+(bx*32)+(by*16)+(bz*8)+(baa*4)+(bab*2)+(bac*1));
        }
       else if(blen == 30)
        {
          bdec = ((ba*536870912)+(bb*268435456)+(bc*134217728)+(bd*67108864)+(be*33554432)+(bf*16777216)+(bg*8388608)+(bh*4194304)+(bi*2097152)+(bj*1048576)+(bk*524288)+(bl*262144)+(bm*131072)+(bn*65536)+(bo*32768)+(bp*16384)+(bq*8192)+(br*4096)+(bs*2048)+(bt*1024)+(bu*512)+(bv*256)+(bw*128)+(bx*64)+(by*32)+(bz*16)+(baa*8)+(bab*4)+(bac*2)+(bad*1));
        }
       else if(blen == 31)
        {
          bdec = ((ba*1073741824)+(bb*536870912)+(bc*268435456)+(bd*134217728)+(be*67108864)+(bf*33554432)+(bg*16777216)+(bh*8388608)+(bi*4194304)+(bj*2097152)+(bk*1048576)+(bl*524288)+(bm*262144)+(bn*131072)+(bo*65536)+(bp*32768)+(bq*16384)+(br*8192)+(bs*4096)+(bt*2048)+(bu*1024)+(bv*512)+(bw*256)+(bx*128)+(by*64)+(bz*32)+(baa*16)+(bab*8)+(bac*4)+(bad*2)+(bae*1));
        }
       clrscr();
       cout<<"\n\n\tBinary "<<b<<" equals "<<bdec<<" in decimal.";
       int btoh(bdec-((bdec/16)*16)), btoha((bdec/16)-((bdec/256)*16)), btohb((bdec/256)-((bdec/4096)*16)), btohc((bdec/4096)-((bdec/65536)*16)), btohd((bdec/65536)-((bdec/1048576)*16)), btohe((bdec/1048576)-((bdec/16777216)*16)), btohf((bdec/16777216)-((bdec/268435456)*16)), btohg((bdec/268435456)-((bdec/4294967296)*16));
       const btocha(55);
       cout<<"\n\n\tBinary "<<b<<" equals ";
       if(btohg>=0 && btohg<=9)
        {
          cout<<btohg;
        }
       else if(btohg>=10 && btohg<=15)
        {
          cout<<(char)(btohg + btocha);
        }
       if(btohf>=0 && btohf<=9)
        {
          cout<<btohf<<" ";
        }
       else if(btohf>=10 && btohf<=15)
        {
          cout<<(char)(btohf + btocha)<<" ";
        }
       if(btohe>=0 && btohe<=9)
        {
          cout<<btohe;
        }
       else if(btohe>=10 && btohe<=15)
        {
          cout<<(char)(btohe + btocha);
        }
       if(btohd>=0 && btohd<=9)
        {
          cout<<btohd<<" ";
        }
       else if(btohd>=10 && btohd<=15)
        {
          cout<<(char)(btohd + btocha)<<" ";
        }
       if(btohc>=0 && btohc<=9)
        {
          cout<<btohc;
        }
       else if(btohc>=10 && btohc<=15)
        {
          cout<<(char)(btohc + btocha);
        }
       if(btohb>=0 && btohb<=9)
        {
          cout<<btohb<<" ";
        }
       else if(btohb>=10 && btohb<=15)
        {
          cout<<(char)(btohb + btocha)<<" ";
        }
       if(btoha>=0 && btoha<=9)
        {
          cout<<btoha;
        }
       else if(btoha>=10 && btoha<=15)
        {
          cout<<(char)(btoha + btocha);
        }
       if(btoh>=0 && btoh<=9)
        {
          cout<<btoh<<" ";
        }
       else if(btoh>=10 && btoh<=15)
        {
          cout<<(char)(btoh + btocha)<<" ";
        }
       cout<<"in hexadecimal.";
       int btoo(bdec-((bdec/8)*8)), btooa((bdec/8)-((bdec/64)*8)), btoob((bdec/64)-((bdec/512)*8)), btooc((bdec/512)-((bdec/4096)*8)), btood((bdec/4096)-((bdec/32768)*8)), btooe((bdec/32768)-((bdec/262144)*8)), btoof((bdec/262144)-((bdec/2097152)*8)), btoog((bdec/2097152)-((bdec/16777216)*8)), btooh((bdec/16777216)-((bdec/134217728)*8)), btooi((bdec/134217728)-((bdec/1073741824)*8)), btooj((bdec/1073741824)-((bdec/8589934592)*8));
       cout<<"\n\n\tBinary "<<b<<" equals "<<btooj<<btooi<<btooh<<btoog<<btoof<<btooe<<btood<<btooc<<btoob<<btooa<<btoo<<" in octal.";
       cout<<"\n\n\n\n\n\n";
       char mb[2];
       do
        {
          cout<<"Do you want to exit? ";
          cin>>mb;
          if(mb[0] =='Y' || mb[0] =='J' || mb[0] =='y' || mb[0] =='j')
           {
             return 0;
           }
          else if(mb[0] =='N' || mb[0] =='n')
           {
             break;
           }
        }while(mb[0] !='Y' || mb[0] !='N' || mb[0] !='J' || mb[0] !='y' || mb[0] !='n' || mb[0] !='j');
     }
    else if(m[0] == '5')
     {
       break;
     }
   }while(m[0] != '1' || m[0] != '2' || m[0] != '3' || m[0] != '4' || m[0] != '5');
  return 0;
}
