Problem faced while solving practical-1 

Issues faced while solving Problem - 1 : 

When the number of hours became greater than the number of bakery items it used to replace items which didn’t even exist so to solve that problem I looped 

for (int i = 0; i < h && (i + h) < n; i++) { int t = arr[i]; arr[i] = arr[i + h]; arr[i + h] = t; } 

Means i < h && (i + h) < n to resolve the issue out 

Issues faced while solving Problem - 2 : 

The loop that I issued was correctly printing the BooIDs of which occurrence was more than once but the problem was it was printing them as many times as it was occurring so I modified the loop 

for (int i = 0; i < n; i++) { if (count[i] > 1) { int alreadyPrinted = 0; for (int j = 0; j < i; j++) { if (bookid[i] == bookid[j]) { alreadyPrinted = 1; break; } } if (!alreadyPrinted) { cout << "Book ID: " << bookid[i] << endl; } } } 

The loop will only proceed further if the count of the BookID is greater than 1and in which I used an integer to assign 0 if not printed(like the default value) and 1 if already printed. 

Issues faced while solving Problem - 3: 

There were no major issues or problems just I took a bit of time for how to get the starting index of the longest word which I did like this 

int indx; for (int i = 0; i < l.length(); i++) { if (l[i] != ' ') { count1++; } else { if (count1 > count){ count = count1; indx = i - count; } count1 = 0; } } if (count1 > count){ count = count1; indx = l.length() - count; } 

