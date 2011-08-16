class Environment {
	public :
		enum Rohstoff_Nahrung_Enum		{ GETREIDE, 	BROT, 		GEBAECK, 	ROHFLEISCH, 	FLEISCH, 	WURST }
		enum Rohstoff_Holz_Enum 		{ BAUMSTAMM, 	BALKEN, 	BRETTER }
		enum Rohstoff_Stein_Enum 		{ BROCKEN, 		GRANIT,		MARMOR }
		enum Rohstoff_Metall_Enum		{ KUPFER,		BRONZE,		EISEN,		STAHL,	MITHRIL }
		enum Rohstoff_Kohle_Enum		{ HOLZKOHLE,	BRAUNKOHLE,	STEINKOHLE }
		enum Rohstoff_Waehrung_Enum		{ KUPFERMUENZE,		SILBERMUENZE,	GOLDMUENZE }
		
		enum Gebaeude_Enum				{ 
											HAUPTHUETTE,	HAUPTHAUS,	RATHAUS,	SENAT,	KAPITOL,	
											
											// LAGERUNG
											LAGERHUETTE,	LAGERHAUS,	SILO,	
											
											//  NAHRUNG 
											BAUERNHUETTE,	BAUERNHOF,	GUTSHOF,	
												VIEHSTALL,		VIEHFARM,	VIEHZUCHT,
												
											METZGER,
											MUEHLE, 
											
											// HOLZ
											
											
											// STEIN
											STEINBUCHT,	STEINGRUBEN,	
											// METALL
											
											// KRISTALL
											
											
										}
		enum Gender_Enum				{ MANN,			FRAU }
		
		enum Beruf_Enum					{ KEIN,		BAUER,		MINENARBEITER,	WALDARBEITER,	ALCHEMIST,	HAENDLER,	HANDWERKER, 
										SCHWERTKAEMPFER,	LANZENTRAEGER,	BOGENSCHUETZE,	REITER, 	PRIESTER,	MAGIER			}
		
		enum Aura_Enum					{	}
		enum Aktion_Enum				{	LAUFEN,		ANGREIFEN,		BAUEN,		ABBAUEN}
};