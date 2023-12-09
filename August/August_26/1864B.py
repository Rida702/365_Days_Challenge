test = int(input())
for i in range(test):
    n, k = map(int, input().split())
    str_1 = input()
    my_set = {char for char in str_1}
    sorted_list = sorted(list(my_set))
    result_string = "".join(element.strip() for element in sorted_list)
    print(result_string)