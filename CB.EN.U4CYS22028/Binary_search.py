print("Enter the number of terms:")
n = int(input())
set = [0] * (n)

# Input
for i in range(0, n - 1 + 1, 1):
    print("Enter the value for term" + str(i + 1) + ":")
    set[i] = int(input())

# Search element
print("Enter the element to be found:")
search = int(input())

# to see if element is found
found = "n"

# low will be the first element initially(0)
low = 0

# high will be the last element
high = n - 1

# Loop will run until element is found or high and low values become the same(implenting break statement)
while high != low and found == "n":
    
    # In case the differnce between the two limits are 1(otherwise it will loop infinitely; since Int(1/2)=0)
    if high - low == 1:
        mid = low + float(high - low) / 2 + 1
    else:
        mid = low + float(high - low) / 2
    
    # If search is equal to mid element
    if set[mid] == search:
        found = "y"
        
        # Storing position of element
        pos = mid
    else:
        
        # Shifting the limits
        if set[mid] < search:
            
            # Search element< mid element => low should move forward
            low = mid
        else:
            
            # Search element> mid element => high should move backward
            high = mid

# To see if the element exists in the set
if found == "y":
    print("The element is found at " + str(pos + 1) + "")
else:
    print("Element not found")
