
print(range(20))

##################################################################

print(*range(20))

#############################################################

print(*range(20,40))

#################################################################

print(*range(20,40,5))

###################################################################

for sayı ,n range(5,15):
	print(sayı)

####################################################################

satir = int(input("üçgenin satır sayısını giriniz :"))
for sayi in range(1,satir+1,2):
	print(sayi*"*")
