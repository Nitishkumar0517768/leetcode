// Last updated: 8/18/2026, 11:50:04 AM
double average(int* salary, int salarySize) {
    double sum = 0;
    int max = salary[0];
    int min = salary[0];
    int size = salarySize - 2;

    for(int i=0; i<salarySize; i++){
        if(max < salary[i]){
            max = salary[i];
        }
        if(min > salary[i]){
            min = salary[i];
        }
        sum = sum + salary[i];
    }

    double avg = (sum - (max + min));

    return avg/size;


}