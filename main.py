def foo_baa():
    for i in range(1, 101):
        foo_baa_text = ""
        if(i % 3 == 0):
            foo_baa_text = "Foo"
        if(i % 5 == 0):
            foo_baa_text += "Baa"
            
        print(foo_baa_text if foo_baa_text else i)

foo_baa()