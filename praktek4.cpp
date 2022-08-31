#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string kartu;
   string bonus;

   raptor_prompt_variable_zzyz ="masukkan kartu anda";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kartu;
   if (kartu=="gold")
   {
      raptor_prompt_variable_zzyz ="pilih bonus anda?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil")
      {
         cout << "Selamat bonus anda telah diambil pada kartu gold" << endl;      }
      else
      {
         cout << "Selamat bonus anda telah masuk ke poin kartu gold" << endl;      }
   }
   else
   {
      raptor_prompt_variable_zzyz ="pilih bonus anda?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil")
      {
         cout << "Selamat bonus anda telah diambil kartu premium" << endl;      }
      else
      {
         cout << "Selamat bonus anda telah masuk ke poin kartu premium" << endl;      }
   }

   return 0;
}
