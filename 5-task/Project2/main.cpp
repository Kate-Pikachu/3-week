#include <iostream>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>


typedef boost::multi_index_container<Rec,
	indexed_by<
	ordered_unique<
	tag<Rec::ByName>, member<Rec, QString, &Rec::name>
	>,
	ordered_non_unique<
	tag<Rec::ByPhone>, member<Rec, QString, &Rec::phone>
	>,
	ordered_non_unique<
	tag<Rec::ByAddr>, member<Rec, QString, &Rec::addr>
	>
	>
> Store;

{
	Store store;
	Rec r1 = { "Basilio Pupkinio", "022", "Neron st" };
	qDebug() << "ok1" << store.insert(r1).second; // ok1 true
	qDebug() << "ok2" << store.insert(r1).second; // ok2 false
}