#########################################################

#begin ve first metodu

s = ("a".."g")

#begin aralıklı nesne içerisinde bulunan ilk nesneyi döndürür
puts s.begin

#first de ayretten parametere alabilir
puts s.first(3)

###########################################################

#and ve last metodları

s = ("a".."g")

#end aralıklı nesnenin son karakterini döndürür
puts s.end

#last da ayretten parametre alabilir
puts s.last(4)

############################################################

#min - max - size metordları

t = (1..40)
r = ("e".."z")

#min  değerini almış oluyoruz
puts t.min
puts r.to_a.min

#max değerini almış oluyoruz
puts t.max
puts r.to_a.max

#size total boyutu almış oluyoruz
puts t.size
puts r.to_a.size

############################################################

#step metodu

k = (1..15)
n = ("e".."z")

#belirlediğimiz parametre kadar atlayarak yazdırır
puts k.step(2).to_a
puts n.step(4).to_a