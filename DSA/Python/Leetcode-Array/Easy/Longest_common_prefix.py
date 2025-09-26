def Longest_common_prefix_bruteforce(strs):
    
    prefix = ""

    for i in range(len(strs[0])):

        for j in range(1 , len(strs)):
            
            if i > len(strs[j]) or strs[j][i] != strs[0][i]:
                return prefix
            
        prefix += strs[0][i]
    return prefix




print(Longest_common_prefix_bruteforce(["flower" , "flow" , "flight"]))


def longest_common_prefix(strs):
    if not strs:
        print("Empty")
        return

    prefix = strs[0]

    for i in range(1, len(strs)):
        j = 0
        print(j)  

        while j < len(prefix) and j < len(strs[i]) and prefix[j] == strs[i][j]:
            j += 1

        new_prefix = ""
        print(j)  

        for k in range(j):
            new_prefix += prefix[k]

        prefix = new_prefix

    print(prefix)
longest_common_prefix(["flower" , "flow" , "flight"])