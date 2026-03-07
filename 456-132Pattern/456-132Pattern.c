// Last updated: 3/7/2026, 10:30:05 PM
1double average(int* salary, int salarySize) {
2    double sum = 0;
3    int max = salary[0];
4    int min = salary[0];
5    int size = salarySize - 2;
6
7    for(int i=0; i<salarySize; i++){
8        if(max < salary[i]){
9            max = salary[i];
10        }
11        if(min > salary[i]){
12            min = salary[i];
13        }
14        sum = sum + salary[i];
15    }
16
17    double avg = (sum - (max + min));
18
19    return avg/size;
20
21
22}