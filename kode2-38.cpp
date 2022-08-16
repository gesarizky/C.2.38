/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {

  // mendeklarasikan string gaya C++
  string S;

  cout<<"Masukkan nama Anda: ";

  // Meminta input dari user
  getline(cin, S);

  // Menampilkan nama yang telah dimasukkan
  cout<<"Hai "<<S<<", apa kabarmu?"<<endl;

  return 0;	
}
