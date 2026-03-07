// Last updated: 3/7/2026, 10:02:29 PM
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function(address) {
     address = address.split('')
    
    for(let i=0; i<address.length; i++){
        if("." == address[i]){
            address[i] = "[.]"
        }
    }
    address = address.join('');
    console.log(address);
    return address;
};