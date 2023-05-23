

using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;


namespace Service.Views.Home 
{
    public class MvcSchoolContext : DbContext
    {
        public  MvcSchoolContext(DbContextOptions <MvcSchoolContext> option) : base(option) {
            
        }

        public DbSet<Student>Students {get; set;}
        public DbSet<Cours>Coures {get; set;}
    }
    
}