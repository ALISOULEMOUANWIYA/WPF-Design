
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Service.Views.Home
{
    public class Cours
    {
        public int Id {get; set;}
        public String Name {get; set;}

        public ICollection<Student>Students {get; set;}
    }
    
}