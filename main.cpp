#include <iostream>

int conventer(int num1, int num2)
{

   std::cout << "Velichina v gigabaytah: ";
   std::cin >>  num2;
   std::cout << "1-bayt,2-kilobayt,3-bit,4-megabayt,5-Disketa 256kb: ";
   std::cin >>  num1;
   std::cout << std::endl;
   if(num1 == 1) {num2 = num2*1073741824;}
   if(num1 == 2) {num2 = num2*1048576;}
   if(num1 == 3) {num2 = num2*8589934592;}
   if(num1 == 4) {num2 = num2*1024;}
   if(num1 == 5) {num2 = num2*1048576/256;}
   std::cout << "Iscimaya velichina " ;
   std::cout << num2;
   return 0;
}

int main()
{
	int num1;
	int num2;
	std::cout << "Zadaniye 1" << std::endl << std::endl;
//1 Задание
   std::cout << "*******" << std::endl
             << "   *   " << std::endl
             << "   *   " << std::endl
             << "   *   " << std::endl
             << "   *   " << std::endl
             << "   *   " << std::endl
             << "   *   " << std::endl << std::endl;
   std::cout << "Zadaniye 2f" << std::endl << std::endl;

   std::cout << "Radius: ";
   std::cin >>  num1;

   std::cout << "Ploshad: " << 3.14*num1*num1 << std::endl;
   std::cout << "Peremiter: " << 2*3.14*num1 << std::endl<< std::endl;

   

   std::cout << "Zadaniye 4" << std::endl << std::endl;
   
   std::cout << "1 Chislo: ";
   std::cin >>  num1;
   std::cout << "2 Chislo: ";
   std::cin >>  num2;
   std::cout << std::endl;
   std::cout << "1 Chislo: " << num2 << std::endl;
   std::cout << "2 Chislo: " << num1 << std::endl<< std::endl;

   std::cout << "Zadaniye 8E" << std::endl << std::endl;
   std::cout << "a: " << pow(2.7,3.6-2)+abs(sin(3.6))-pow(3.6,4)*cos(1/3.6) << std::endl;
   std::cout << std::endl;
   std::cout << "Zadaniye 9K" << std::endl << std::endl;

   std::cout << "Velichina v gigabaytah: ";
   std::cin >>  num2;
   std::cout << "1-bayt,2-kilobayt,3-bit,4-megabayt,5-Disketa 256kb: ";
   std::cin >>  num1;
   std::cout << std::endl;
   if(num1 == 1) {std::cout << "Iscomaya Velichina: " << num2*1073741824 << std::endl<< std::endl;}
   if(num1 == 2) {std::cout << "Iscomaya Velichina: " << num2*1048576 << std::endl<< std::endl;}
   if(num1 == 3) {std::cout << "Iscomaya Velichina: " << num2*8589934592 << std::endl<< std::endl;}
   if(num1 == 4) {std::cout << "Iscomaya Velichina: " << num2*1024 << std::endl<< std::endl;}
   if(num1 == 5) {std::cout << "Iscomaya Velichina: " << num2*1048576/256<< std::endl<< std::endl;}

   std::cout << "Zadaniye 12" << std::endl << std::endl;
   
   conventer(num1,num2);

   std::getchar();
   std::getchar();
   return 0;
}

