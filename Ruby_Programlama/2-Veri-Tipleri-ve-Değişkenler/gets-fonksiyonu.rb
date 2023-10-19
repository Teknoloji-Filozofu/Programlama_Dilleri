=begin 
gets methodu ile gelen her veri string değerinde sayılır
yani kullanıcı rakamda girse Ruby tarafından bu bir 
string değerindedir üzerinde sayısal işlem yapılmaz
=end

print  "Adınız:"
a = gets
puts a

# bu yöntem ile a değişleninin türünü öğrenebiliriz
puts a.class

print "Yaşını:"
b = gets
puts b

puts b.class

print "Adınız:"
c = gets
puts "Hoşgeldin #{c} nerelerdeydin"

# aynı satırdan devam etmek için
print "Adınız:"
d = gets.chomp
puts "hoş heldin #{d} nerdeydin"