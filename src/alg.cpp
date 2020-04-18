int cbinsearch(int *arr, int size, int value)
{
 int l = 0;
 int r = size;
 int mid;
 int v1 = 0;
  while (l <= r)
  {
            mid = (l+r)/2; 
            if (arr[mid] == value) v1 = mid; 
            if (arr[mid] > value) right = mid - 1; 
            else l = mid + 1; 
        }
        while (arr[v1] == value)
        {
            answ++; 
            v1--; 
        }
        return answ;
    }
}
