#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string lampu;

   raptor_prompt_variable_zzyz ="lampu merah atau hijau";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> lampu;
   if (lampu=="hijau")
   {
      cout << "anda boleh jalan" << endl;   }
   else
   {
      cout << "anda harus berhenti" << endl;   }

   return 0;
}
