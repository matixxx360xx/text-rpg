#include <iostream>

using namespace std;

class Gracz {
private:
   string name;
   int hp;
   int stamina;
   int dmg;
public:
   Gracz(int h = 100, int s = 50, int d = 10) {
       hp = h;
       stamina = s;
       dmg = d;
   }


   string GetName() {
       return name;
   }

   void SetName(string s) {
       name = s;
   }

   void Statystyki() {
       cout << "imie:" << name << endl << "zdrowie" << hp << endl << "stamina:" << stamina << endl << "obrazenia:" << dmg << endl;
   }
  
};

int main() {
   Gracz gracz;

   cout << "Podaj imie" << endl;
   string s_name;
   cin >> s_name;
   gracz.SetName(s_name);
   gracz.Statystyki();

   return 0;
}
