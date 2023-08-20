#show that method and variable is allocate on stack
def func():
    a = 20
    b= 50
    c= 100
    print(id(a))
    print(id(b))
    print(id(c))
print(id(func))
func()
print('\n')

#show that two reference the same object
word_1="A"
print(id(word_1))
word_2="A"
print(id(word_2))
print("word_1 and word_2 ref same object:")
print(word_1 is word_2)
print('\n')

#show that when change value, ref change object
num_1 = 5
num_2 = 6
print(id(num_1))
print(id(num_2))
num_1=num_1+1
print(id(num_1))
