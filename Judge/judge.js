 document.getElementById('inputfile')
            .addEventListener('change', function() {
              
            var fr=new FileReader();
            fr.onload=function(){
                document.getElementById('output')
                        .textContent=fr.result;
            }
              
            fr.readAsText(this.files[0]);
        })

        function testing( ans , ouPut ){
            if (ans.length() != outPut.length()) {
                return 0 ;
            }
            for (let i = 0; i < ans.length; i++) {
                if(ans[i] != ouPut[i]) {
                    return 0 ;
                }
                
            }
            return 1 ;
        }
        function filesToArray(file1 , file2 , arr1 , arr2){
            
        }