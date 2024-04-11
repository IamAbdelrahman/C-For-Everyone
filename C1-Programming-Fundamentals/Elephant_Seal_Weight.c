// Note this program is run on Linux(Ubuntu)  OS.
#include <stdio.h> 
//prototype : size of file's function >> to know the size of the file.
int Sizeof_file (void); 

int main(void)  
{   
    // declaring a pointer of type file.
    FILE *fptr;  

    // using the fopen() function to open files.
    fptr = fopen("elephant_data.txt","r"); 

    // size to store the size of the file in -- i is the index of the array.
    int size , i = 0; 

    // get the size of the file.
    size =  Sizeof_file();  

    // the array which contains the weight of elephants.
    int weight_array [size]; 

    // This will be used to read and store values from the file.
    int number;   

    // This loop terminates when no number exists in the file.
    while (fscanf(fptr,"%d", &number) == 1)
    {    
        // Assign every number in an index of the array of weights.
        weight_array [i] = number;  
        ++i;    
    }   

    // Close the file.
    fclose(fptr);   

    // Total variable to store the sum of all values in it.
    double total = 0.0;    

    // for loop to calculate the sum of all values using an index of j.
    for (unsigned int j = 0; j < size; ++j)
        total += weight_array[j];

    printf("So the sum of all weights is = %.0lf kg\n", total);   
    printf("The average is %.2lf\n", total / size); 

}   

int Sizeof_file(void)   
{
    FILE *fptr;
    fptr = fopen("elephant_data.txt","r");
    int number, size = 0;

    while (fscanf(fptr,"%d", &number) == 1)
    {
        ++size;
    }

    fclose(fptr);
    return size;
}







