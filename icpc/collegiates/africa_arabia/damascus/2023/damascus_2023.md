# Damascus University Collegiate Programming Contest

## H. Ammar-utiful Array
Because there's two different queries, let's solve each of them independently.

### Type 1 Query:
For every query, we can't naively iterate over every single element. 
However, we can see that the color number for each element never changes across all queries, so we can for every color store an "to add" counter.
 - Because the problem asks to change all colors different than the provided one, we can just store a total add counter.
 - Then we can reference total-add[col] to get the amount added.

(similarly to complementary counting)

### Type 2 Query:
We're asked to find the longest prefix, so we can calculate prefix sums for every color.
However, the sums change during every type 1 query, so we can't do a simple upper_bound.
 - So we have to manually do a binary search.
 - Note that the original numbers are all positive, so the original sequence would be monotonic.
 - The number added to each number is the same (and is strictly positive), so the prefix sum after all type 1 queries is still monotonic.