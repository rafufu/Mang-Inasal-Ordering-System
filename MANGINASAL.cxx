

#include<iostream>
#include<string>
using namespace std;
int main()
{

char choice;
char enter;
char disc;

int PM;
int SM;
int MM;
int FM;
int D;
int DK;
 
 //quantity
int count= 0;
int count1= 0;
int count2= 0;
int count3= 0;
int count4= 0;
int count5= 0;
int count6= 0;
int count7= 0;
int count8= 0;
int count9= 0;
int count10= 0;
int count11= 0;
int count12= 0;
int count13= 0;
int count14= 0;
int count15= 0;
int count16= 0;
int count17= 0;
int count18= 0;
int count19= 0;
int count20= 0;

//paborito meal
double PM1 = 114.40;
double PM2 = 114.40;
double PM3 = 128.70;
double PM4 = 114.40;
double PM5 = 114.40;
double PM6 = 114.40;
double AmountOfPM = 0;

//sulit meal
double SM1 = 86.90;
double SM2 = 75.90;
double AmountOfSM = 0;

//merrienda meal
double p = 68.20;
double lt = 57.20;
double ppp = 299.20;
double AmountOfMM = 0;

//fiesta meal
double FM1 = 148.50;
double FM2 = 137.50;
double AmountOfFM = 0;

// dessert
double lf = 33.00;
double hl = 55.00;
double AmountOfD = 0;


// drinks
double c = 41.80;
double cz = 41.80;
double s = 41.80;
double it = 41.80;
double irg = 41.80;
double AmountOfDK = 0;

// delivery fee
double df = 50.00;

// payment
double total = 0;
double cash = 0;
double change;

cout<<"================================================================================================================\n";
cout<<"||                                                                                                            ||\n";
cout<<"||               (()       (()  (((((((() (()        (((((((() ((((((((() (((()   (((() (((((((()             ||\n";
cout<<"||               (()       (()  (()       (()       (()        (()    (() (()  (()  (() (()                   ||\n";
cout<<"||                (()  () (()   ((((()    (()      (()         (()    (() (()   ()  (() ((((()                ||\n";
cout<<"||                 (()(()(()    (()       (()       (()        (()    (() (()       (() (()                   ||\n";
cout<<"||                  (() (()     (((((((() (((((((()  (((((((() ((((((((() (()       (() (((((((()             ||\n";
cout<<"||                                                                                                            ||\n";
cout<<"||                                        (((((((((() ((((((((()                                              ||\n";
cout<<"||                                            (()     (()    (()                                              ||\n";
cout<<"||                                            (()     (()    (()                                              ||\n";
cout<<"||                                            (()     (()    (()                                              ||\n";
cout<<"||                                            (()     ((((((((()                                              ||\n";
cout<<"||                                                                                                            ||\n";
cout<<"||                               (((()   (((()     ((()     ((()   (()   (((((((()                            ||\n";
cout<<"||                               (()  (()  (()    (()(()    (() () (()  (()                                   ||\n";
cout<<"||                               (()   ()  (()   (()  (()   (()  ()(() (()   (((((()                          ||\n";
cout<<"||                               (()       (()  ((((((((()  (()   ((()  (()      (()                          ||\n";
cout<<"||                               (()       (() (()      (() (()    (()   ((((((((()                           ||\n";
cout<<"||                                                                                                            ||\n";
cout<<"||                     (((((((((() ((()   (()     ((()     (((((((()     ((()     (()                         ||\n";
cout<<"||                         (()     (() () (()    (()(()    (()          (()(()    (()                         ||\n";
cout<<"||                         (()     (()  ()(()   (()  (()   (((((((()   (()  (()   (()                         ||\n";
cout<<"||                         (()     (()   ((()  ((((((((()        (()  ((((((((()  (()                         ||\n";
cout<<"||                     (((((((((() (()    (() (()      (() (((((((() (()      (() (((((((()                   ||\n";
cout<<"||                                                                                                            ||\n";
cout<<"================================================================================================================\n";

beginning:
system("CLS");
system("color A");

cout<<"================================================================\n";
cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
cout<<"||||||||     |     ||          ||     |||   ||   ||||   ||||||||\n";
cout<<"||||||||   |   |   ||   |||||||||   |  ||   ||   ||||   ||||||||\n";
cout<<"||||||||   || ||   ||      ||||||   ||  |   ||   ||||   ||||||||\n";
cout<<"||||||||   |||||   ||   |||||||||   |||     ||   ||||   ||||||||\n";
cout<<"||||||||   |||||   ||          ||   ||||    ||          ||||||||\n";
cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
cout<<"================================================================\n";
cout<<"|| [A] PABORITO MEALS        || [D] FIESTA MASAL MEAL         ||\n";
cout<<"||...........................||...............................||\n";
cout<<"||   Paa w/ Rice             ||   Chicken Inasal              ||\n";
cout<<"||   Spicy Paa w/ Rice       ||   Pork BBQ                    ||\n";
cout<<"||   Pecho w/ Rice           ||===============================||\n";
cout<<"||   2pcs Pork BBq w/ Rice   || [E] DESSEERT                  ||\n";
cout<<"||   Improved Bangus Sisig   ||...............................||\n";
cout<<"||   Improved Pork Sisig     ||   Leche Flan                  ||\n";
cout<<"||===========================||   Halo Halo                   ||\n";
cout<<"|| [B] SULIT MEALS           ||===============================||\n";
cout<<"||...........................|| [F] DRINKS                    ||\n";
cout<<"||   1pc Chicken w/ Rice     ||...............................||\n";
cout<<"||   1pc Pork BBQ w/ Rice    ||   Coke                        ||\n";
cout<<"||===========================||   Coke Zero                   ||\n";
cout<<"|| [C] MERIENDA MEAL         ||   Sprite                      ||\n";
cout<<"||...........................||   Iced Tea                    ||\n";
cout<<"||   Palabok                 ||   Iced Red Gulaman            ||\n";
cout<<"||   2pcs Lumpiang Toge      ||===============================||\n";
cout<<"||   Palabok Party Plan      ||  [G] ORDER CART               ||\n";
cout<<"================================================================\n";
cout<<"\nPlease Enter your Choice: ";
cin>>choice;
system("CLS");

switch (choice){
 
case 'a':
cout<<"================================================================================================================\n";
cout<<"||      Paborito Meals                                                                                        ||\n";
cout<<"================================================================================================================\n";
cout<<"||      [1]  PM1 - Paa w/ Rice...................................... Php 114.40                               ||\n";
cout<<"||      [2]  PM1.5 - Spicy Paa w/ Rice.............................. Php 128.70                               ||\n";
cout<<"||      [3]  PM2 - Pecho w/ Rice.................................... Php 114.40                               ||\n";
cout<<"||      [4]  PM3 - 2pcs Pork BBq w/ Rice............................ Php 114.40                               ||\n";
cout<<"||      [5]  PM4 - Improved Bangus Sisig............................ Php 114.40                               ||\n";
cout<<"||      [6]  PM5 - Improved Pork Sisig.............................. Php 114.40                               ||\n";
cout<<"||      [7]  Back                                                                                             ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>PM;

if(PM==7){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
  cin>>count;
}


switch (PM){

case 1:
count1 = count1 + count;
  AmountOfPM = AmountOfPM + PM1 * count1;
  break;
 
  case 2:
  count2 = count2 + count;
  AmountOfPM = AmountOfPM + PM2 * count2;
  break;
 
  case 3:
  count3 = count3 + count;
  AmountOfPM = AmountOfPM + PM3 * count3;
  break;
 
  case 4:
  count4 = count4 + count;
  AmountOfPM = AmountOfPM + PM4 * count4;
  break;

  case 5:
  count5 = count1 + count;
  AmountOfPM = AmountOfPM +  PM5 * count5;
  break;
 
  case 6:
  count6 = count6 + count;
  AmountOfPM = AmountOfPM + PM6 * count6;
  break;

  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;
  }

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;

if(enter=='Y' || enter=='y'){
goto beginning;
}
else{
goto payment;
}
break;

case 'b':
cout<<"================================================================================================================\n";
cout<<"||       Sulit Meals                                                                                          ||\n";
cout<<"================================================================================================================\n";
cout<<"||      [1] SM1 - 1pc Chicken w/ Rice............................... Php 86.90                                ||\n";
cout<<"||      [2] SM2 - 1pc Pork BBQ w/ Rice.............................. Php 75.90                                ||\n";
cout<<"||      [3] Back                                                                                              ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>SM;

if(SM==3){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
cin>>count;
}
 
switch (SM){
 
  case 1:
  count7 = count7 + count;
  AmountOfSM =  AmountOfSM + SM1 * count7;
  break;
 
  case 2:
  count8 = count8 + count;
  AmountOfSM = AmountOfSM + SM2 * count8;
  break;
 
  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;
 
}
 
cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y'){
goto beginning;
}
else{
goto payment;
}
break;
 
case 'c':
cout<<"================================================================================================================\n";
cout<<"||      Merienda Meals                                                                                        ||\n";
cout<<"================================================================================================================\n";
cout<<"||      [1] Palabok................................................. Php 68.20                                ||\n";
cout<<"||      [2] 2pcs Lumpiang Toge...................................... Php 57.20                                ||\n";
cout<<"||      [3] Palabok Party Plan...................................... Php 299.20                               ||\n";
cout<<"||      [4] Back                                                                                              ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>MM;

if(MM==4){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
cin>>count;
}

switch (MM){
 
  case 1:
  count9 = count9 + count;
  AmountOfMM = AmountOfMM + p * count9;
  break;
 
  case 2:
  count10 = count10 + count;
  AmountOfMM = AmountOfMM + lt * count10;
  break;
 
  case 3:
  count11 = count11 + count;
  AmountOfMM = AmountOfMM + ppp * count11;
  break;
 
  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;

}

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y'){
goto beginning;
}
else{
goto payment;
}
break;
 
case 'd':
cout<<"================================================================================================================\n";
cout<<"||      Fiesta Meals                                                                                          ||\n";
cout<<"================================================================================================================\n";
cout<<"||      [1] FM1 - Chicken Inasal.................................... Php 148.50                               ||\n";
cout<<"||      [2] FM2 - Pork BBQ.......................................... Php 137.50                               ||\n";
cout<<"||      [3] Back                                                                                              ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>FM;

if(FM==3){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
cin>>count;
}
 
switch (FM){
 
  case 1:
  count12 = count12 + count;
  AmountOfFM = AmountOfFM + FM1 * count12;
  break;
 
  case 2:
  count13 = count13 + count;
  AmountOfFM = AmountOfFM + FM2 * count13;
  break;
 
  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;
 
}

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y')
{
goto beginning;
}
else
{
goto payment;
}
break;

case 'e':
cout<<"================================================================================================================\n";
cout<<"||      Desserts                                                                                              ||\n";
cout<<"================================================================================================================\n";
cout<<"||      [1] Leche Flan.............................................. Php 33.00                                ||\n";
cout<<"||      [2] Halo Halo............................................... Php 55.00                                ||\n";
cout<<"||      [3] Back                                                                                              ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>D;

if(D==3){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
cin>>count;
}
 
switch (D){
 
  case 1:
  count14 = count14 + count;
  AmountOfD = AmountOfD + lf * count14;
  break;
 
  case 2:
  count15 = count15 + count;
  AmountOfD = AmountOfD + hl * count15;
  break;
 
  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;

}

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y')
{
goto beginning;
}
else
{
goto payment;
}
break;

case 'f':
cout<<"================================================================================================================\n";
cout<<"||       Drinks                                                                                               ||\n";
cout<<"================================================================================================================\n";
cout<<"||       [1] Coke................................................... Php 41.80                                ||\n";
cout<<"||       [2] Coke Zero.............................................. Php 41.80                                ||\n";
cout<<"||       [3] Sprite................................................. Php 41.80                                ||\n";
cout<<"||       [4] Iced Tea............................................... Php 41.80                                ||\n";
cout<<"||       [5] Iced Red Gulaman....................................... Php 41.80                                ||\n";
cout<<"||       [6] Back                                                                                             ||\n";
cout<<"================================================================================================================\n";
cout<<"\nWhat is your order?: ";
cin>>DK;

if(DK==6){
goto beginning;
}
else{
cout<<"\nHow many would you like?: ";
cin>>count;
}

switch (DK){
 
  case 1:
  count16 = count16 + count;
  AmountOfDK = AmountOfDK + c * count16;
  break;
 
  case 2:
  count17 = count17 + count;
  AmountOfDK = AmountOfDK + cz * count17;
  break;
 
  case 3:
  count18 = count18 + count;
  AmountOfDK = AmountOfDK +  s * count18;
  break;
 
  case 4:
  count19 = count19 + count;
  AmountOfDK = AmountOfDK + it * count19;
  break;
 
  case 5:
  count20 = count20 + count;
  AmountOfDK = AmountOfDK + irg * count20;
  break;
 
  default:
  cout<<"\t\t\t\t\t\t\t\t\t\t\tWARNING! WRONG INPUT\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\tTRANSACTION NOT RECORDED\n";
  break;

}

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y')
{
goto beginning;
}
else
{
goto payment;
}

break;

case 'g':

goto ordercart;
break;

default:
goto beginning;
break;
}

ordercart:
system("CLS");

cout<<"================================================================================================================\n";
cout<<"||      ORDER CART                                                                                            ||\n";
cout<<"================================================================================================================\n\n\n";
cout<<"ITEM\t\t\t\tQUANTITY\tITEMPRICE\tAMOUNTOFSALE\tTOTAL\n\n";
 
if(AmountOfPM>0){

if(count1>0){
cout<<"PM1 Paa w/Rice\t\t\t"<<count1<<"\t\t"<<PM1<<"\t\t"<<PM1 * count1<<" Php"<<"\n\n";
}
if(count2>0){
cout<<"PM1.5 Spicy Paa w/Rice\t\t"<<count2<<"\t\t"<<PM2<<"\t\t"<<PM2 * count2<<"Php"<<"\n\n";
}
if(count3>0){
cout<<"PM2 Pecho w/Rice\t\t"<<count3<<"\t\t"<<PM3<<"\t\t"<<PM3 * count3<<"Php"<<"\n\n";
}
if(count4>0){
cout<<"PM3 2pcs Pork BBq w/Rice\t"<<count4<<"\t\t"<<PM4<<"\t\t"<<PM4 * count4<<"Php"<<"\n\n";
}
if(count5>0){
cout<<"PM4 Improved Bangus Sisig\t"<<count5<<"\t\t"<<PM5<<"\t\t"<<PM5 * count5<<"Php"<<"\n\n";
}
if(count6>0){
cout<<"PM6 Improved Pork Sisig\t\t"<<count6<<"\t\t"<<PM6<<"\t\t"<<PM6 * count6<<"Php"<<"\n\n";
}
}

if(AmountOfSM>0){

if(count7>0){
cout<<"SM1 1pc Pork BBQ w/ Rice\t"<<count7<<"\t\t"<<SM1<<"\t\t"<<SM1 * count7<<"Php"<<"\n\n";
}
if(count8>0){
cout<<"SM2  1pc Pork BBQ w/ Rice.\t"<<count8<<"\t\t"<<SM2<<"\t\t"<<SM2 * count8<<"Php"<<"\n\n";
}
}

if(AmountOfMM>0){

if(count9>0){
cout<<"Palabok\t\t\t\t"<<count9<<"\t\t"<<p<<"\t\t"<<p * count9<<"Php"<<"\n\n";
}
if(count10>0){
cout<<"2pcs Lumpiang Toge\t\t"<<count10<<"\t\t"<<lt<<"\t\t"<<lt * count10<<"Php"<<"\n\n";
}
if(count11>0){
cout<<"Palabok Party Plan\t\t"<<count11<<"\t\t"<<ppp<<"\t\t"<<ppp * count11<<"Php"<<"\n\n";
}
}

if(AmountOfFM>0){

if(count12>0){
cout<<"FM1 Chicken Inasal\t\t"<<count12<<"\t\t"<<FM1<<"\t\t"<<FM1 * count12<<"Php"<<"\n\n";
}
if(count13>0){
cout<<"FM2 Pork BBQ\t\t\t"<<count13<<"\t\t"<<FM2<<"\t\t"<<FM2 * count13<<"Php"<<"\n\n";
}
}

if(AmountOfD>0){

if(count14>0){
cout<<"Leche Flan\t\t\t"<<count14<<"\t\t"<<lf<<"\t\t"<<lf * count14<<"Php"<<"\n\n";
}
if(count15>0){
cout<<"Halo-Halo\t\t\t"<<count15<<"\t\t"<<hl<<"\t\t"<<hl * count15<<"Php"<<"\n\n";
}
}

if(AmountOfDK>0){

if(count16>0){
cout<<"Coke \t\t\t\t"<<count16<<"\t\t"<<c<<"\t\t"<<c * count16<<"Php"<<"\n\n";
}
if(count17>0){
cout<<"Coke Zero\t\t\t"<<count17<<"\t\t"<<cz<<"\t\t"<<cz * count17<<"Php"<<"\n\n";
}
if(count18>0){
cout<<"Sprite\t\t\t\t"<<count18<<"\t\t"<<s<<"\t\t"<<s * count18<<"Php"<<"\n\n";
}
if(count19>0){
cout<<"Iced Tea\t\t\t"<<count19<<"\t\t"<<it<<"\t\t"<<it * count19<<"Php"<<"\n\n";
}
if(count20>0){
cout<<"Iced Red Gulaman\t\t"<<count20<<"\t\t"<<irg<<"\t\t"<<irg * count20<<"Php"<<"\n\n";
}
}

cout<<"\nWould you like to order anything else? Y / N: ";
cin>>enter;
if(enter=='Y' || enter=='y')
{
goto beginning;
}
else
{
goto payment;
}

payment:
system("CLS");

cout<<"================================================================================================================\n";
cout<<"||      RECEIPT                                                                                               ||\n";
cout<<"================================================================================================================\n\n\n";
cout<<"ITEM\t\t\t\tQUANTITY\tITEMPRICE\tAMOUNTOFSALE\tPROMO\t\t\tTOTAL\n\n";
 
if(AmountOfPM>0){

if(count1>0){
cout<<"PM1 Paa w/Rice\t\t\t"<<count1<<"\t\t"<<PM1<<"\t\t"<<PM1 * count1<<" Php"<<"\n\n";
}
if(count2>0){
cout<<"PM1.5 Spicy Paa w/Rice\t\t"<<count2<<"\t\t"<<PM2<<"\t\t"<<PM2 * count2<<"Php"<<"\n\n";
}
if(count3>0){
cout<<"PM2 Pecho w/Rice\t\t"<<count3<<"\t\t"<<PM3<<"\t\t"<<PM3 * count3<<"Php"<<"\n\n";
}
if(count4>0){
cout<<"PM3 2pcs Pork BBq w/Rice\t"<<count4<<"\t\t"<<PM4<<"\t\t"<<PM4 * count4<<"Php"<<"\n\n";
}
if(count5>0){
cout<<"PM4 Improved Bangus Sisig\t"<<count5<<"\t\t"<<PM5<<"\t\t"<<PM5 * count5<<"Php"<<"\n\n";
}
if(count6>0){
cout<<"PM6 Improved Pork Sisig\t\t"<<count6<<"\t\t"<<PM6<<"\t\t"<<PM6 * count6<<"Php"<<"\n\n";
}
}

if(AmountOfSM>0){

if(count7>0){
cout<<"SM1 1pc Pork BBQ w/ Rice\t"<<count7<<"\t\t"<<SM1<<"\t\t"<<SM1 * count7<<"Php"<<"\n\n";
}
if(count8>0){
cout<<"SM2  1pc Pork BBQ w/ Rice.\t"<<count8<<"\t\t"<<SM2<<"\t\t"<<SM2 * count8<<"Php"<<"\n\n";
}
}

if(AmountOfMM>0){

if(count9>0){
cout<<"Palabok\t\t\t\t"<<count9<<"\t\t"<<p<<"\t\t"<<p * count9<<"Php"<<"\n\n";
}
if(count10>0){
cout<<"2pcs Lumpiang Toge\t\t"<<count10<<"\t\t"<<lt<<"\t\t"<<lt * count10<<"Php"<<"\n\n";
}
if(count11>0){
cout<<"Palabok Party Plan\t\t"<<count11<<"\t\t"<<ppp<<"\t\t"<<ppp * count11<<"Php"<<"\n\n";
}
}

if(AmountOfFM>0){

if(count12>0){
cout<<"FM1 Chicken Inasal\t\t"<<count12<<"\t\t"<<FM1<<"\t\t"<<FM1 * count12<<"Php"<<"\n\n";
}
if(count13>0){
cout<<"FM2 Pork BBQ\t\t\t"<<count13<<"\t\t"<<FM2<<"\t\t"<<FM2 * count13<<"Php"<<"\n\n";
}
}

if(AmountOfD>0){

if(count14>0){
cout<<"Leche Flan\t\t\t"<<count14<<"\t\t"<<lf<<"\t\t"<<lf * count14<<"Php"<<"\n\n";
}
if(count15>0){
cout<<"Halo-Halo\t\t\t"<<count15<<"\t\t"<<hl<<"\t\t"<<hl * count15<<"Php"<<"\n\n";
}
}

if(AmountOfDK>0){

if(count16>0){
cout<<"Coke \t\t\t\t"<<count16<<"\t\t"<<c<<"\t\t"<<c * count16<<"Php"<<"\n\n";
}
if(count17>0){
cout<<"Coke Zero\t\t\t"<<count17<<"\t\t"<<cz<<"\t\t"<<cz * count17<<"Php"<<"\n\n";
}
if(count18>0){
cout<<"Sprite\t\t\t\t"<<count18<<"\t\t"<<s<<"\t\t"<<s * count18<<"Php"<<"\n\n";
}
if(count19>0){
cout<<"Iced Tea\t\t\t"<<count19<<"\t\t"<<it<<"\t\t"<<it * count19<<"Php"<<"\n\n";
}
if(count20>0){
cout<<"Iced Red Gulaman\t\t"<<count20<<"\t\t"<<irg<<"\t\t"<<irg * count20<<"Php"<<"\n\n";
}
}

total = df + AmountOfPM + AmountOfSM + AmountOfMM + AmountOfFM  + AmountOfD + AmountOfDK ;

if(AmountOfPM>=300){
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
cout<<"\t\t\t\t\t\t\t\t\t\t|| FREE 1 RICE ||\n";
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
}

if(AmountOfSM>=200){
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
cout<<"\t\t\t\t\t\t\t\t\t\t|| FREE 1 RICE ||\n";
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
}

if(AmountOfFM>=300){
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
cout<<"\t\t\t\t\t\t\t\t\t\t|| FREE 1 RICE ||\n";
cout<<"\t\t\t\t\t\t\t\t\t\t=================\n";
}

if(total>=500){
total = total - df;
}
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      "<<total<<" php\n\n";
cout<<"NOTE! ADDITIONAL 50PHP FOR DELIVERY FEE IF YOU PURCHASE WORTH 500 THERES NO ADDITIONAL DELIVERY FEE\n\n\n";
cout<<"\nCash: ";
cin>>cash;

if(cash>=total){
change = cash - total ;
cout<<"\nChange: "<<change<<"\n\n";
}
else{
cout<<"INSUFFICIENT AMOUNT!\n";
goto payment;
}

cout<<"\nAre You a Senior Citizen? Y / N ";
cin>>disc;
if(disc=='Y'|| disc=='y'){
cout<<"\n\t\t\t\t\t\t\t\t\t\t\t20% Discount Approved!"<<endl;
change= change -(change*0.2);
cout<<"\n\t\t\t\t\t\t\t\t\t\t\tDiscounted Change: "<<change<<"\n\n";
}

cout<<"=======================================================================================================================\n";
cout<<"||                                                   ORDER SUCCESSFUL!                                               ||\n";
cout<<"||                                    Your Order Will be delivered in 40 Minutes                                     ||\n";
cout<<"||                                                                                                                   ||\n";
cout<<"||                                                   ENJOY YOUR MEAL!                                                ||\n";
cout<<"||                                                THANK YOU!!COME AGAIN!                                             ||\n";
cout<<"=======================================================================================================================\n";

}