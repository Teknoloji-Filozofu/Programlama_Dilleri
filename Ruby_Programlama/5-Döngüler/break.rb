# break ifadesi

# i 6'ya eşit olduğunda işlmi durduracak
1.upto 10 do |i|
    break if i == 6
    print "#{i}"
end

###################################################

#next ifadesi

# a 4'e eşit olduğunda pas geçecek
10.times do |a|
    next if a == 4
    print "#{a} "
end

##################################################

#redo ifadesi 

#son yapılan işlemi getiriryor
5.times do |d|
    puts "şu anki işlem #{a}"
    puts "aynı işlem devam edilsin mi (e\h)"
    cevap = gets.chop
    redo if cevap == "e"
end