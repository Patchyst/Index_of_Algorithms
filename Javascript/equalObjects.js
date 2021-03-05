// returns 1 if two js objs are equal, 0 if not
function objEquals(obj1, obj2){
    if(typeof obj1 == 'object' && typeof obj2 == 'object' && !(obj2 == null || obj1 == null)){
        let obj1Keys = Object.keys(obj1);
        let obj2Keys = Object.keys(obj2)
        if((obj1Keys.length === obj2Keys.length)){
            for(let i = 0; i<obj1Keys.length; i++){
                let obj1Prop = obj1Keys[i];
                let obj2Prop = obj2Keys[i];
                if(obj1Prop === obj2Prop){
                    if(typeof obj1[obj1Prop] == 'object' && typeof obj2[obj2Prop] == 'object'){
                        return objEquals(obj1[obj1Prop], obj2[obj2Prop]);
                    }
                    else{
                     if(!(obj1[obj1Prop] === obj2[obj2Prop])){
                        return 0;
                     }
                    }
                }
                else return 0;
            }
        }
        else return 0;
    }
    else{
        if(obj2 == null && obj1 == null){return 1;}
        return 0;
    }
    return 1;
}
