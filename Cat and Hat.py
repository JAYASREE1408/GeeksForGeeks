def cat_hat(str):
    # l=len(str)
    # count=0
    # count1=0
    # for i in range(l-2):
    #     if(str[i:i+3]=='cat'):
    #         count=count+1
    #     if (str[i:i+3]=='hat'):
    #         count1+=1
    
    # if(count==count1):
    #     return True
    # else:
    #     return False
        
    hat=str.count("hat")
    cat=str.count("cat")
    if hat==cat:
        return True
    else:
        return False
