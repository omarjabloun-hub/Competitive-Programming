// 
  using System ;
  using System.IO ;
  using System.Text ;
  
  namespace exoDeleg{

       class Calcul{
        public static int somme( int a , int b ){
            return a + b ;
        }
        public static int product( int a , int b){
            return a* b ;
        }
        
    }
    class Program{
        static void Main(string[] args){
            int x , y ;
           
            x = Console.Read() ;
            Console.WriteLine(x) ;
            
            y = Console.Read() ;
         
            Console.WriteLine("HEYYY") ;
            
            
                Console.WriteLine(Calcul.somme(x, y)) ;
           
                Console.WriteLine(Calcul.product(x , y )) ;
            
            
        }
    }

      
  }