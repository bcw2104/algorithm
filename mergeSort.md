#mergeSort

It is a comparison-based sorting algorithm. When implemented in a common way, this alignment belongs to a stable alignment, and is one of the subdivision conquering algorithms. John von Neumann developed it in 1945.

If the length of the list is less than one, it is considered to be already sorted. 
otherwise
    1.Divide: Cut the unordered list in half and divide it into two parts of a similar size.
    2.Conquest: To sort each partial list recursively using the merger alignment.
    3.Combine: Merge the two partial lists into one sorted list again. The alignment results are then stored in a temporary array.
    4.Copy: Copies the results stored in the temporary array to the original array.
    
Time Complexity : O(NlogN)