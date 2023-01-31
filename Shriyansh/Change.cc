#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#include<math.h>
#include<ctime>
using namespace std;

int main()
{
  ofstream fout ("RandomCorr.dat");
  
  double n;
  double ran[1000000];
  double sum_k = 0., sum_i = 0., sum_sq = 0.;
  double avg_k, avg_i, avg_sq;
  double ck;

  srand(time(NULL));
  for (int i=0; i<1000000; i++)
    {
      
      n = (double)rand()/RAND_MAX;
      //cout << "Seed = " << time(0) << endl;
      ran[i] = n;
    }
  
  for  (int k=0; k<50; k++)
    {
      for (int j=0; j<(1000000-k); j++)
	{
	  sum_k += ran[j] * ran[j+k];
	}
      
      avg_k = (double)sum_k/(1000000-k);
      
      for (int l=0; l<1000000; l++)
	{
	  sum_i += ran[l];
	  sum_sq += ran[l] * ran[l];
	}
      
      avg_i = (double) sum_i/1000000;
      avg_sq = (double)sum_sq/1000000;

      ck = (double)(avg_k - pow(avg_i,  2))/(avg_sq - pow(avg_i, 2));
      fout << ck << " ";

      ck = 0.;
      sum_k = 0.;
      sum_i = 0.;
      sum_sq = 0.;
    }
  
  fout << endl;
  fout.close();
  return 0;
}
