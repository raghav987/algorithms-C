# List
course = ['math','compsci']
course_2 = course
print(course)
print(course_2)
course[0] = 'Art'
print(course)     # Can do this
print(course_2)   #in List but not in tuples

#Tuples
tuple_1 = ('history','Math','physics','copmsci')
tuple_2 = tuple_1
print(tuple_1)
print(tuple_2)
#tuple_1[0] = 'Art #not alloweds'
#print(tuple_1)
#print(tuple_2)

#Set
cs_course = {'history','Math','physics','copmsci','Math'}
print(cs_course)    #will print the items in any orde and destroys the duplicates
