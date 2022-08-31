#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int biaya;
   string kendaraan;
   int jarak;

   raptor_prompt_variable_zzyz ="anda ingin kendaraan apa?";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kendaraan;
   if (kendaraan=="goride")
   {
      raptor_prompt_variable_zzyz ="pilih jarak?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> jarak;
      if (jarak<=5)
      {
         biaya =(5*2000)+5000;
         cout << "total biaya anda adalah "<<biaya << endl;      }
      else
      {
         if (jarak<=10)
         {
            biaya =(10*2500)+7500;
            cout << "total biaya anda "<<biaya << endl;         }
         else
         {
            if (jarak<=15)
            {
               biaya =(15*3000)+10000;
               cout << "total biaya anda "<<biaya << endl;            }
            else
            {
               cout << "Maaf pesanan anda tidak dapat dilayani" << endl;            }
         }
      }
   }
   else
   {
      raptor_prompt_variable_zzyz ="pilih jarak?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> jarak;
      if (jarak<=5)
      {
         biaya =(5*3000)+15000;
         cout << "total biaya anda adalah "<<biaya << endl;      }
      else
      {
         if (jarak<=10)
         {
            biaya =(10*4500)+17500;
            cout << "total biaya anda "<<biaya << endl;         }
         else
         {
            if (jarak<=15)
            {
               biaya =(15*5000)+20000;
               cout << "total biaya anda "<<biaya << endl;            }
            else
            {
               cout << "Maaf pesanan anda tidak dapat dilayani" << endl;            }
         }
      }
   }

   return 0;
}
