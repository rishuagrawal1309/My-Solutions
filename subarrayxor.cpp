/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n1, int B) {
    int c=0,i;
    for( i=0;i<n1-1;i++)
    {
        int p=A[i];
        int j;
        if(p==B) c++;
        for( j=i+1;j<n1;j++)
        {
            p=p^A[j];
            if(p==B)
            {c++;
            }
        }
    }
    if(i==n1-1 && A[i]==B) c++;
    return c;
}
