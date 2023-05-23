using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ResponsiveApp.Controllers
{
    internal class Taches
    {
        
        public int MontantBase = 1000;
        public Int64 MontantPlafont = 50000;
        
        public Taches(string Affaire, int NombreAffaire, string JourAffaire)
        {
            this.Affaire = Affaire;
            this.MontantAffaire = (Int64)  NombreAffaire * MontantBase;
            this.NombreAffaire = NombreAffaire;
            this.Pourcenntage =  ((NombreAffaire * MontantBase) * 100) % MontantPlafont;
            this.ValeurAffaire = (int) this.Pourcenntage;
            this.JourAffaire = JourAffaire;
        }

        public string Affaire { get; set; }
        public Int64 MontantAffaire { get; set; }
        public int NombreAffaire { get; set; }
        public Int64 Pourcenntage { get; set; }
        public int ValeurAffaire { get; set; }
        public string JourAffaire { get; set; }
    }
}
