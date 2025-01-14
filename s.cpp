#include <iostream>

using namespace std;

int main() {
  int time, burst_time[10], at[10], sum_burst_time = 0, smallest, n, i;
  int sumt = 0, sumw = 0;
  cout << "Enter the number of processes: ";
  cin >> n;
 

  for (i = 0; i < n; i++) {
	cout << "Enter the arrival time for process P" << i + 1 << ": ";
	cin >> at[i];
	cout << "Enter the burst time for process P" << i + 1 << ": ";
	cin >> burst_time[i];
	sum_burst_time += burst_time[i];
  }
 
  burst_time[9] = 9999;

  for (time = 0; time < sum_burst_time;) {
	smallest = 9;
    	for (i = 0; i < n; i++) {
             
  	if (at[i] <= time && burst_time[i] > 0 && burst_time[i] < burst_time[smallest])
    	smallest = i;
	}
    
	cout << "P[" << smallest + 1 << "]\t|\t" << time + burst_time[smallest] - at[smallest] << "\t|\t" << time - at[smallest] << endl;
	sumt += time + burst_time[smallest] - at[smallest];
	sumw += time - at[smallest];
	time += burst_time[smallest];
	burst_time[smallest] = 0;
  }
 
  cout << "\n\nAverage waiting time = " << static_cast<float>(sumw) / n;
  cout << "\nAverage turnaround time = " << static_cast<float>(sumt) / n;
 
  return 0;
}

