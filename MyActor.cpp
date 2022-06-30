// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
	RootComponent = root;

	mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh1"));

	//이륙
	key0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key0"));
	key1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key1"));
	key2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key2"));
	key3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key3"));
	//aileron roll
	key4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key4"));
	key5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key5"));
	key6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key6"));
	//loop
	key7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key7"));
	key8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key8"));
	key9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key9"));
	key10 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key10"));
	key11 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key11"));
	key12 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key12"));
	//방향 전환
	key13 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key13"));
	//cuban eight
	key14 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key14"));
	key15 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key15"));
	key16 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key16"));
	key17 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key17"));
	key18 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key18"));
	key19 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key19"));
	key20 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key20"));
	key21 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key21"));
	key22 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key22"));
	key23 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key23"));
	key24 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key24"));
	key25 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key25"));
	//직선 이동
	key26 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key26"));
	key27 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key27"));
	//수직 이동, half turn
	key28 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key28"));
	key29 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key29"));
	//45도 하강, 이동
	key30 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key30"));
	key31 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key31"));
	//barrel roll
	key32 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key32"));
	key33 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key33"));
	key34 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key34"));
	key35 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key35"));
	key36 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key36"));
	//90도 상승, loop, spin
	key37 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key37"));
	key38 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key38"));
	key39 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key39"));
	key40 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key40"));
	key41 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key41"));
	key42 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key42"));
	key43 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key43"));
	//spin
	key44 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key44"));
	key45 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key45"));
	key46 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key46"));
	key47 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key47"));
	//이동
	key48 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key48"));
	key49 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key49"));
	key50 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key50"));
	key51 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key51"));
	key52 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key52"));
	//split
	key53 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key53"));
	key54 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key54"));
	key55 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key55"));
	key56 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key56"));
	key57 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key57"));
	//side slip
	key58 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key58"));
	key59 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key59"));
	key60 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key60"));


	static ConstructorHelpers::FObjectFinder<UStaticMesh> HeliAsset(TEXT("StaticMesh'/Game/P/airplane.airplane'"));

	if (HeliAsset.Succeeded()) {
		UStaticMesh* m = HeliAsset.Object;
		
		mesh1->SetStaticMesh(m);
		key0->SetStaticMesh(m);
		key1->SetStaticMesh(m);
		key2->SetStaticMesh(m);
		key3->SetStaticMesh(m);
		key4->SetStaticMesh(m);
		key5->SetStaticMesh(m);
		key6->SetStaticMesh(m);
		key7->SetStaticMesh(m);
		key8->SetStaticMesh(m);
		key9->SetStaticMesh(m);
		key10->SetStaticMesh(m);
		key11->SetStaticMesh(m);
		key12->SetStaticMesh(m);
		key13->SetStaticMesh(m);
		key14->SetStaticMesh(m);
		key15->SetStaticMesh(m);
		key16->SetStaticMesh(m);
		key17->SetStaticMesh(m);
		key18->SetStaticMesh(m);
		key19->SetStaticMesh(m);
		key20->SetStaticMesh(m);
		key21->SetStaticMesh(m);
		key22->SetStaticMesh(m);
		key23->SetStaticMesh(m);
		key24->SetStaticMesh(m);
		key25->SetStaticMesh(m);
		key26->SetStaticMesh(m);
		key27->SetStaticMesh(m);
		key28->SetStaticMesh(m);
		key29->SetStaticMesh(m);
		key30->SetStaticMesh(m);
		key31->SetStaticMesh(m);
		key32->SetStaticMesh(m);
		key33->SetStaticMesh(m);
		key34->SetStaticMesh(m);
		key35->SetStaticMesh(m);
		key36->SetStaticMesh(m);
		key37->SetStaticMesh(m);
		key38->SetStaticMesh(m);
		key39->SetStaticMesh(m);
		key40->SetStaticMesh(m);
		key41->SetStaticMesh(m);
		key42->SetStaticMesh(m);
		key43->SetStaticMesh(m);
		key44->SetStaticMesh(m);
		key45->SetStaticMesh(m);
		key46->SetStaticMesh(m);
		key47->SetStaticMesh(m);
		key48->SetStaticMesh(m);
		key49->SetStaticMesh(m);
		key50->SetStaticMesh(m);
		key51->SetStaticMesh(m);
		key52->SetStaticMesh(m);
		key53->SetStaticMesh(m);
		key54->SetStaticMesh(m);
		key55->SetStaticMesh(m);
		key56->SetStaticMesh(m);
		key57->SetStaticMesh(m);
		key58->SetStaticMesh(m);
		key59->SetStaticMesh(m);
		key60->SetStaticMesh(m);

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("HeliAsset Fail"));
	}

	mesh1->AttachTo(root);
	key0->AttachTo(root);
	key1->AttachTo(root);
	key2->AttachTo(root);
	key3->AttachTo(root);
	key4->AttachTo(root);
	key5->AttachTo(root);
	key6->AttachTo(root);
	key7->AttachTo(root);
	key8->AttachTo(root);
	key9->AttachTo(root);
	key10->AttachTo(root);
	key11->AttachTo(root);
	key12->AttachTo(root);
	key13->AttachTo(root);
	key14->AttachTo(root);
	key15->AttachTo(root);
	key16->AttachTo(root);
	key17->AttachTo(root);
	key18->AttachTo(root);
	key19->AttachTo(root);
	key20->AttachTo(root);
	key21->AttachTo(root);
	key22->AttachTo(root);
	key23->AttachTo(root);
	key24->AttachTo(root);
	key25->AttachTo(root);
	key26->AttachTo(root);
	key27->AttachTo(root);
	key28->AttachTo(root);
	key29->AttachTo(root);
	key30->AttachTo(root);
	key31->AttachTo(root);
	key32->AttachTo(root);
	key33->AttachTo(root);
	key34->AttachTo(root);
	key35->AttachTo(root);
	key36->AttachTo(root);
	key37->AttachTo(root);
	key38->AttachTo(root);
	key39->AttachTo(root);
	key40->AttachTo(root);
	key41->AttachTo(root);
	key42->AttachTo(root);
	key43->AttachTo(root);
	key44->AttachTo(root);
	key45->AttachTo(root);
	key46->AttachTo(root);
	key47->AttachTo(root);
	key48->AttachTo(root);
	key49->AttachTo(root);
	key50->AttachTo(root);
	key51->AttachTo(root);
	key52->AttachTo(root);
	key53->AttachTo(root);
	key54->AttachTo(root);
	key55->AttachTo(root);
	key56->AttachTo(root);
	key57->AttachTo(root);
	key58->AttachTo(root);
	key59->AttachTo(root);
	key60->AttachTo(root);

	key0->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(30.0f, 0.0f, 0.0f));
	key1->SetRelativeLocationAndRotation(FVector(100.0f, 100.0f, 200.f), FRotator(0.0f, 30.0f, 90.0f));
	key2->SetRelativeLocationAndRotation(FVector(100.0f, 100.0f, 300.f), FRotator(0.0f, 30.0f, 90.0f));
	key3->SetRelativeLocationAndRotation(FVector(100.0f, 0.0f, 300.f), FRotator(30.0f, 0.0f, 0.0f));
	key4->SetRelativeLocationAndRotation(FVector(100.0f, 0.0f, 300.f), FRotator(30.0f, 0.0f, 0.0f));
	key5->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 300.f), FRotator(0.0f, 0.0f, 90.0f));
	key6->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.f), FRotator(0.0f, 0.0f, 0.0f));
	key7->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.f), FRotator(0.0f, 0.0f, 0.0f));
	key8->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key9->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 90.0f));
	key10->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key11->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(0.0f, 0.0f, 0.0f));
	key12->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key13->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key14->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key15->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(0.0f, 0.0f, 0.0f));
	key16->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key17->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key18->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key19->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key20->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key21->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key22->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key23->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key24->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key25->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key26->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key27->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key28->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key29->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key30->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key31->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key32->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key33->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key34->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key35->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key36->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key37->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key38->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key39->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key40->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key41->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key42->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key43->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key44->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key45->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key46->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key47->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key48->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key49->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key50->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key51->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key52->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key53->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key54->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key55->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key56->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key57->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key58->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key59->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key60->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));

	t0 = 0.5f;
	t1 = t0+1.5f;
	t2 = t1+1.5f;
	t3 = t2+0.5f;
	t4 = t3+1.0f;
	t5 = t4+0.5f;
	t6 = t5+1.0f;
	t7 = t6+1.0f;
	t8 = t7+1.0f;
	t9 = t8+1.0f;
	t10 = t9+1.0f;
	t11 = t10+1.0f;
	t12 = t11+1.0f;
	t13 = t12+1.0f;
	t14 = t13+1.0f;
	t15 = t14+1.0f;
	t16 = t15+1.0f;
	t17 = t16+1.0f;
	t18 = t17+1.0f;
	t19 = t18+1.0f;
	t20 = t19+1.0f;
	t21 = t20+1.0f;
	t22 = t21+1.0f;
	t23 = t22+1.0f;
	t24 = t23+1.0f;
	t25 = t24+1.0f;
	t26 = t25+1.0f;
	t27 = t26+1.0f;
	t28 = t27+1.0f;
	t29 = t28+1.0f;
	t30 = t29+1.0f;
	t31 = t30+1.0f;
	t32 = t31+1.0f;
	t33 = t32+1.0f;
	t34 = t33+1.0f;
	t35 = t34+1.0f;
	t36 = t35+1.0f;
	t37 = t36+1.0f;
	t38 = t37+1.5f;
	t39 = t38+1.5f;
	t40 = t39+0.5f;
	t41 = t40+0.5f;
	t42 = t41+0.5f;
	t43 = t42+0.5f;
	t44 = t43+1.0f;
	t45 = t44+1.0f;
	t46 = t45+1.0f;
	t47 = t46+1.0f;
	t48 = t47+1.0f;
	t49 = t48+0.5f;
	t50 = t49+1.5f;
	t51 = t50+0.5f;
	t52 = t51+0.5f;
	t53 = t52+1.0f;
	t54 = t53+1.0f;
	t55 = t54+1.0f;
	t56 = t55+1.0f;
	t57 = t56+1.0f;
	t58 = t57+1.0f;
	t59 = t58+1.0f;
	t60 = t59+2.5f;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	time = 0.f;

	if (camera_actor) {
		GetWorld()->GetFirstPlayerController()->SetViewTarget(camera_actor);
		heli_to_cam = (camera_actor->GetActorLocation() - key0->GetComponentLocation());
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	time += DeltaTime;

	
	FVector p0 = key0->GetRelativeLocation();
	FVector p1 = key1->GetRelativeLocation();
	FVector p2 = key2->GetRelativeLocation();
	FVector p3 = key3->GetRelativeLocation();
	FVector p4 = key4->GetRelativeLocation();
	FVector p5 = key5->GetRelativeLocation();
	FVector p6 = key6->GetRelativeLocation();
	FVector p7 = key7->GetRelativeLocation();
	FVector p8 = key8->GetRelativeLocation();
	FVector p9 = key9->GetRelativeLocation();
	FVector p10 = key10->GetRelativeLocation();
	FVector p11 = key11->GetRelativeLocation();
	FVector p12 = key12->GetRelativeLocation();
	FVector p13 = key13->GetRelativeLocation();
	FVector p14 = key14->GetRelativeLocation();
	FVector p15 = key15->GetRelativeLocation();
	FVector p16 = key16->GetRelativeLocation();
	FVector p17 = key17->GetRelativeLocation();
	FVector p18 = key18->GetRelativeLocation();
	FVector p19 = key19->GetRelativeLocation();
	FVector p20 = key20->GetRelativeLocation();
	FVector p21 = key21->GetRelativeLocation();
	FVector p22 = key22->GetRelativeLocation();
	FVector p23 = key23->GetRelativeLocation();
	FVector p24 = key24->GetRelativeLocation();
	FVector p25 = key25->GetRelativeLocation();
	FVector p26 = key26->GetRelativeLocation();
	FVector p27 = key27->GetRelativeLocation();
	FVector p28 = key28->GetRelativeLocation();
	FVector p29 = key29->GetRelativeLocation();
	FVector p30 = key30->GetRelativeLocation();
	//
	FVector p31 = key31->GetRelativeLocation();
	FVector p32 = key32->GetRelativeLocation();
	FVector p33 = key33->GetRelativeLocation();
	FVector p34 = key34->GetRelativeLocation();
	FVector p35 = key35->GetRelativeLocation();
	FVector p36 = key36->GetRelativeLocation();
	FVector p37 = key37->GetRelativeLocation();
	FVector p38 = key38->GetRelativeLocation();
	FVector p39 = key39->GetRelativeLocation();
	FVector p40 = key40->GetRelativeLocation();
	FVector p41 = key41->GetRelativeLocation();
	FVector p42 = key42->GetRelativeLocation();
	FVector p43 = key43->GetRelativeLocation();
	FVector p44 = key44->GetRelativeLocation();
	FVector p45 = key45->GetRelativeLocation();
	FVector p46 = key46->GetRelativeLocation();
	FVector p47 = key47->GetRelativeLocation();
	FVector p48 = key48->GetRelativeLocation();
	FVector p49 = key49->GetRelativeLocation();
	FVector p50 = key50->GetRelativeLocation();
	FVector p51 = key51->GetRelativeLocation();
	FVector p52 = key52->GetRelativeLocation();
	FVector p53 = key53->GetRelativeLocation();
	FVector p54 = key54->GetRelativeLocation();
	FVector p55 = key55->GetRelativeLocation();
	FVector p56 = key56->GetRelativeLocation();
	FVector p57 = key57->GetRelativeLocation();
	FVector p58 = key58->GetRelativeLocation();
	FVector p59 = key59->GetRelativeLocation();
	FVector p60 = key60->GetRelativeLocation();
	

	FQuat q0 = FQuat(key0->GetRelativeRotation());
	FQuat q1 = FQuat(key1->GetRelativeRotation());
	FQuat q2 = FQuat(key2->GetRelativeRotation());
	FQuat q3 = FQuat(key3->GetRelativeRotation());
	FQuat q4 = FQuat(key4->GetRelativeRotation());
	FQuat q5 = FQuat(key5->GetRelativeRotation());
	FQuat q6 = FQuat(key6->GetRelativeRotation());
	FQuat q7 = FQuat(key7->GetRelativeRotation());
	FQuat q8 = FQuat(key8->GetRelativeRotation());
	FQuat q9 = FQuat(key9->GetRelativeRotation());
	FQuat q10 = FQuat(key10->GetRelativeRotation());
	FQuat q11 = FQuat(key11->GetRelativeRotation());
	FQuat q12 = FQuat(key12->GetRelativeRotation());
	FQuat q13 = FQuat(key13->GetRelativeRotation());
	FQuat q14 = FQuat(key14->GetRelativeRotation());
	FQuat q15 = FQuat(key15->GetRelativeRotation());
	FQuat q16 = FQuat(key16->GetRelativeRotation());
	FQuat q17 = FQuat(key17->GetRelativeRotation());
	FQuat q18 = FQuat(key18->GetRelativeRotation());
	FQuat q19 = FQuat(key19->GetRelativeRotation());
	FQuat q20 = FQuat(key20->GetRelativeRotation());
	FQuat q21 = FQuat(key21->GetRelativeRotation());
	FQuat q22 = FQuat(key22->GetRelativeRotation());
	FQuat q23 = FQuat(key23->GetRelativeRotation());
	FQuat q24 = FQuat(key24->GetRelativeRotation());
	FQuat q25 = FQuat(key25->GetRelativeRotation());
	FQuat q26 = FQuat(key26->GetRelativeRotation());
	FQuat q27 = FQuat(key27->GetRelativeRotation());
	FQuat q28 = FQuat(key28->GetRelativeRotation());
	FQuat q29 = FQuat(key29->GetRelativeRotation());
	FQuat q30 = FQuat(key30->GetRelativeRotation());
	//
	FQuat q31 = FQuat(key31->GetRelativeRotation());
	FQuat q32 = FQuat(key32->GetRelativeRotation());
	FQuat q33 = FQuat(key33->GetRelativeRotation());
	FQuat q34 = FQuat(key34->GetRelativeRotation());
	FQuat q35 = FQuat(key35->GetRelativeRotation());
	FQuat q36 = FQuat(key36->GetRelativeRotation());
	FQuat q37 = FQuat(key37->GetRelativeRotation());
	FQuat q38 = FQuat(key38->GetRelativeRotation());
	FQuat q39 = FQuat(key39->GetRelativeRotation());
	FQuat q40 = FQuat(key40->GetRelativeRotation());
	FQuat q41 = FQuat(key41->GetRelativeRotation());
	FQuat q42 = FQuat(key42->GetRelativeRotation());
	FQuat q43 = FQuat(key43->GetRelativeRotation());
	FQuat q44 = FQuat(key44->GetRelativeRotation());
	FQuat q45 = FQuat(key45->GetRelativeRotation());
	FQuat q46 = FQuat(key46->GetRelativeRotation());
	FQuat q47 = FQuat(key47->GetRelativeRotation());
	FQuat q48 = FQuat(key48->GetRelativeRotation());
	FQuat q49 = FQuat(key49->GetRelativeRotation());
	FQuat q50 = FQuat(key50->GetRelativeRotation());
	FQuat q51 = FQuat(key51->GetRelativeRotation());
	FQuat q52 = FQuat(key52->GetRelativeRotation());
	FQuat q53 = FQuat(key53->GetRelativeRotation());
	FQuat q54 = FQuat(key54->GetRelativeRotation());
	FQuat q55 = FQuat(key55->GetRelativeRotation());
	FQuat q56 = FQuat(key56->GetRelativeRotation());
	FQuat q57 = FQuat(key57->GetRelativeRotation());
	FQuat q58 = FQuat(key58->GetRelativeRotation());
	FQuat q59 = FQuat(key59->GetRelativeRotation());
	FQuat q60 = FQuat(key60->GetRelativeRotation());
	
	FVector p;
	FQuat q;

	if (time < t0) {
		p = key0->GetRelativeLocation();
		q = FQuat(key0->GetRelativeRotation());
	}
	else if (time < t1) {
		p = FMath::CubicCRSplineInterpSafe(p0, p0, p1, p2, t0 - 1.f, t0, t1, t2, time);
		q = FMath::CubicCRSplineInterpSafe(q0, q0, q1, q2, t0 - 1.f, t0, t1, t2, time);
	}
	else if (time < t2) {
		p = FMath::CubicCRSplineInterpSafe(p0, p1, p2, p3, t0, t1, t2, t3, time);
		q = FMath::CubicCRSplineInterpSafe(q0, q1, q2, q3, t0, t1, t2, t3, time);
	}
	else if (time < t3) {
		p = FMath::CubicCRSplineInterpSafe(p1, p2, p3, p4, t1, t2, t3, t4, time);
		q = FMath::CubicCRSplineInterpSafe(q1, q2, q3, q4, t1, t2, t3, t4, time);
	}
	else if (time < t4) {
		p = FMath::CubicCRSplineInterpSafe(p2, p3, p4, p5, t2, t3, t4, t5, time);
		q = FMath::CubicCRSplineInterpSafe(q2, q3, q4, q5, t2, t3, t4, t5, time);
	}
	else if (time < t5) {
		p = FMath::CubicCRSplineInterpSafe(p3, p4, p5, p6, t3, t4, t5, t6, time);
		q = FMath::CubicCRSplineInterpSafe(q3, q4, q5, q6, t3, t4, t5, t6, time);
	}
	else if (time < t6) {
		p = FMath::CubicCRSplineInterpSafe(p4, p5, p6, p7, t4, t5, t6, t7, time);
		q = FMath::CubicCRSplineInterpSafe(q4, q5, q6, q7, t4, t5, t6, t7, time);
	}
	else if (time < t7) {
		p = FMath::CubicCRSplineInterpSafe(p5, p6, p7, p8, t5, t6, t7, t8, time);
		q = FMath::CubicCRSplineInterpSafe(q5, q6, q7, q8, t5, t6, t7, t8, time);
	}
	else if (time < t8) {
		p = FMath::CubicCRSplineInterpSafe(p6, p7, p8, p9, t6, t7, t8, t9, time);
		q = FMath::CubicCRSplineInterpSafe(q6, q7, q8, q9, t6, t7, t8, t9, time);
	}
	else if (time < t9) {
		p = FMath::CubicCRSplineInterpSafe(p7, p8, p9, p10, t7, t8, t9, t10, time);
		q = FMath::CubicCRSplineInterpSafe(q7, q8, q9, q10, t7, t8, t9, t10, time);
	}
	else if (time < t10) {
		p = FMath::CubicCRSplineInterpSafe(p8, p9, p10, p11, t8, t9, t10, t11, time);
		q = FMath::CubicCRSplineInterpSafe(q8, q9, q10, q11, t8, t9, t10, t11, time);
	}
	else if (time < t11) {
		p = FMath::CubicCRSplineInterpSafe(p9, p10, p11, p12, t9, t10, t11, t12, time);
		q = FMath::CubicCRSplineInterpSafe(q9, q10, q11, q12, t9, t10, t11, t12, time);
	}
	else if (time < t12) {
		p = FMath::CubicCRSplineInterpSafe(p10, p11, p12, p13, t10, t11, t12, t13, time);
		q = FMath::CubicCRSplineInterpSafe(q10, q11, q12, q13, t10, t11, t12, t13, time);
	}
	else if (time < t13) {
		p = FMath::CubicCRSplineInterpSafe(p11, p12, p13, p14, t11, t12, t13, t14, time);
		q = FMath::CubicCRSplineInterpSafe(q11, q12, q13, q14, t11, t12, t13, t14, time);
	}
	else if (time < t14) {
		p = FMath::CubicCRSplineInterpSafe(p12, p13, p14, p15, t12, t13, t14, t15, time);
		q = FMath::CubicCRSplineInterpSafe(q12, q13, q14, q15, t12, t13, t14, t15, time);
	}
	else if (time < t15) {
		p = FMath::CubicCRSplineInterpSafe(p13, p14, p15, p16, t13, t14, t15, t16, time);
		q = FMath::CubicCRSplineInterpSafe(q13, q14, q15, q16, t13, t14, t15, t16, time);
	}
	else if (time < t16) {
		p = FMath::CubicCRSplineInterpSafe(p14, p15, p16, p17, t14, t15, t16, t17, time);
		q = FMath::CubicCRSplineInterpSafe(q14, q15, q16, q17, t14, t15, t16, t17, time);
	}
	else if (time < t17) {
		p = FMath::CubicCRSplineInterpSafe(p15, p16, p17, p18, t15, t16, t17, t18, time);
		q = FMath::CubicCRSplineInterpSafe(q15, q16, q17, q18, t15, t16, t17, t18, time);
	}
	else if (time < t18) {
		p = FMath::CubicCRSplineInterpSafe(p16, p17, p18, p19, t16, t17, t18, t19, time);
		q = FMath::CubicCRSplineInterpSafe(q16, q17, q18, q19, t16, t17, t18, t19, time);
	}
	else if (time < t19) {
		p = FMath::CubicCRSplineInterpSafe(p17, p18, p19, p20, t17, t18, t19, t20, time);
		q = FMath::CubicCRSplineInterpSafe(q17, q18, q19, q20, t17, t18, t19, t20, time);
	}
	else if (time < t20) {
		p = FMath::CubicCRSplineInterpSafe(p18, p19, p20, p21, t18, t19, t20, t21, time);
		q = FMath::CubicCRSplineInterpSafe(q18, q19, q20, q21, t18, t19, t20, t21, time);
	}
	else if (time < t21) {
		p = FMath::CubicCRSplineInterpSafe(p19, p20, p21, p22, t19, t20, t21, t22, time);
		q = FMath::CubicCRSplineInterpSafe(q19, q20, q21, q22, t19, t20, t21, t22, time);
	}
	else if (time < t22) {
		p = FMath::CubicCRSplineInterpSafe(p20, p21, p22, p23, t20, t21, t22, t23, time);
		q = FMath::CubicCRSplineInterpSafe(q20, q21, q22, q23, t20, t21, t22, t23, time);
	}
	else if (time < t23) {
		p = FMath::CubicCRSplineInterpSafe(p21, p22, p23, p24, t21, t22, t23, t24, time);
		q = FMath::CubicCRSplineInterpSafe(q21, q22, q23, q24, t21, t22, t23, t24, time);
	}
	else if (time < t24) {
		p = FMath::CubicCRSplineInterpSafe(p22, p23, p24, p25, t22, t23, t24, t25, time);
		q = FMath::CubicCRSplineInterpSafe(q22, q23, q24, q25, t22, t23, t24, t25, time);
	}
	else if (time < t25) {
		p = FMath::CubicCRSplineInterpSafe(p23, p24, p25, p26, t23, t24, t25, t26, time);
		q = FMath::CubicCRSplineInterpSafe(q23, q24, q25, q26, t23, t24, t25, t26, time);
	}
	else if (time < t26) {
		p = FMath::CubicCRSplineInterpSafe(p24, p25, p26, p27, t24, t25, t26, t27, time);
		q = FMath::CubicCRSplineInterpSafe(q24, q25, q26, q27, t24, t25, t26, t27, time);
	}
	else if (time < t27) {
		p = FMath::CubicCRSplineInterpSafe(p25, p26, p27, p28, t25, t26, t27, t28, time);
		q = FMath::CubicCRSplineInterpSafe(q25, q26, q27, q28, t25, t26, t27, t28, time);
	}
	else if (time < t28) {
		p = FMath::CubicCRSplineInterpSafe(p26, p27, p28, p29, t26, t27, t28, t29, time);
		q = FMath::CubicCRSplineInterpSafe(q26, q27, q28, q29, t26, t27, t28, t29, time);
	}
	else if (time < t29) {
		p = FMath::CubicCRSplineInterpSafe(p27, p28, p29, p30, t27, t28, t29, t30, time);
		q = FMath::CubicCRSplineInterpSafe(q27, q28, q29, q30, t27, t28, t29, t30, time);
	}

	else if (time < t30) {
		p = FMath::CubicCRSplineInterpSafe(p28, p29, p30, p31, t28, t29, t30, t31, time);
		q = FMath::CubicCRSplineInterpSafe(q28, q29, q30, q31, t28, t29, t30, t31, time);
	}
	else if (time < t31) {
		p = FMath::CubicCRSplineInterpSafe(p29, p30, p31, p32, t29, t30, t31, t32, time);
		q = FMath::CubicCRSplineInterpSafe(q29, q30, q31, q32, t29, t30, t31, t32, time);
	}
	else if (time < t32) {
		p = FMath::CubicCRSplineInterpSafe(p30, p31, p32, p33, t30, t31, t32, t33, time);
		q = FMath::CubicCRSplineInterpSafe(q30, q31, q32, q33, t30, t31, t32, t33, time);
	}
	else if (time < t33) {
		p = FMath::CubicCRSplineInterpSafe(p31, p32, p33, p34, t31, t32, t33, t34, time);
		q = FMath::CubicCRSplineInterpSafe(q31, q32, q33, q34, t31, t32, t33, t34, time);
	}
	else if (time < t34) {
		p = FMath::CubicCRSplineInterpSafe(p32, p33, p34, p35, t32, t33, t34, t35, time);
		q = FMath::CubicCRSplineInterpSafe(q32, q33, q34, q35, t32, t33, t34, t35, time);
	}
	else if (time < t35) {
		p = FMath::CubicCRSplineInterpSafe(p33, p34, p35, p36, t33, t34, t35, t36, time);
		q = FMath::CubicCRSplineInterpSafe(q33, q34, q35, q36, t33, t34, t35, t36, time);
	}
	else if (time < t36) {
		p = FMath::CubicCRSplineInterpSafe(p34, p35, p36, p37, t34, t35, t36, t37, time);
		q = FMath::CubicCRSplineInterpSafe(q34, q35, q36, q37, t34, t35, t36, t37, time);
	}
	else if (time < t37) {
		p = FMath::CubicCRSplineInterpSafe(p35, p36, p37, p38, t35, t36, t37, t38, time);
		q = FMath::CubicCRSplineInterpSafe(q35, q36, q37, q38, t35, t36, t37, t38, time);
	}
	else if (time < t38) {
		p = FMath::CubicCRSplineInterpSafe(p36, p37, p38, p39, t36, t37, t38, t39, time);
		q = FMath::CubicCRSplineInterpSafe(q36, q37, q38, q39, t36, t37, t38, t39, time);
	}
	else if (time < t39) {
		p = FMath::CubicCRSplineInterpSafe(p37, p38, p39, p40, t37, t38, t39, t40, time);
		q = FMath::CubicCRSplineInterpSafe(q37, q38, q39, q40, t37, t38, t39, t40, time);
	}
	else if (time < t40) {
		p = FMath::CubicCRSplineInterpSafe(p38, p39, p40, p41, t38, t39, t40, t41, time);
		q = FMath::CubicCRSplineInterpSafe(q38, q39, q40, q41, t38, t39, t40, t41, time);
	}
	else if (time < t41) {
		p = FMath::CubicCRSplineInterpSafe(p39, p40, p41, p42, t39, t40, t41, t42, time);
		q = FMath::CubicCRSplineInterpSafe(q39, q40, q41, q42, t39, t40, t41, t42, time);
	}
	else if (time < t42) {
		p = FMath::CubicCRSplineInterpSafe(p40, p41, p42, p43, t40, t41, t42, t43, time);
		q = FMath::CubicCRSplineInterpSafe(q40, q41, q42, q43, t40, t41, t42, t43, time);
	}
	else if (time < t43) {
		p = FMath::CubicCRSplineInterpSafe(p41, p42, p43, p44, t41, t42, t43, t44, time);
		q = FMath::CubicCRSplineInterpSafe(q41, q42, q43, q44, t41, t42, t43, t44, time);
	}
	else if (time < t44) {
		p = FMath::CubicCRSplineInterpSafe(p42, p43, p44, p45, t42, t43, t44, t45, time);
		q = FMath::CubicCRSplineInterpSafe(q42, q43, q44, q45, t42, t43, t44, t45, time);
	}
	else if (time < t45) {
		p = FMath::CubicCRSplineInterpSafe(p43, p44, p45, p46, t43, t44, t45, t46, time);
		q = FMath::CubicCRSplineInterpSafe(q43, q44, q45, q46, t43, t44, t45, t46, time);
	}
	else if (time < t46) {
		p = FMath::CubicCRSplineInterpSafe(p44, p45, p46, p47, t44, t45, t46, t47, time);
		q = FMath::CubicCRSplineInterpSafe(q44, q45, q46, q47, t44, t45, t46, t47, time);
	}
	else if (time < t47) {
		p = FMath::CubicCRSplineInterpSafe(p45, p46, p47, p48, t45, t46, t47, t48, time);
		q = FMath::CubicCRSplineInterpSafe(q45, q46, q47, q48, t45, t46, t47, t48, time);
	}
	else if (time < t48) {
		p = FMath::CubicCRSplineInterpSafe(p46, p47, p48, p49, t46, t47, t48, t49, time);
		q = FMath::CubicCRSplineInterpSafe(q46, q47, q48, q49, t46, t47, t48, t49, time);
	}
	else if (time < t49) {
		p = FMath::CubicCRSplineInterpSafe(p47, p48, p49, p50, t47, t48, t49, t50, time);
		q = FMath::CubicCRSplineInterpSafe(q47, q48, q49, q50, t47, t48, t49, t50, time);
	}
	else if (time < t50) {
		p = FMath::CubicCRSplineInterpSafe(p48, p49, p50, p51, t48, t49, t50, t51, time);
		q = FMath::CubicCRSplineInterpSafe(q48, q49, q50, q52, t48, t49, t50, t51, time);
	}
	else if (time < t51) {
		p = FMath::CubicCRSplineInterpSafe(p49, p50, p51, p52, t49, t50, t51, t52, time);
		q = FMath::CubicCRSplineInterpSafe(q49, q50, q52, q52, t49, t50, t51, t52, time);
	}
	else if (time < t52) {
		p = FMath::CubicCRSplineInterpSafe(p50, p51, p52, p53, t50, t51, t52, t53, time);
		q = FMath::CubicCRSplineInterpSafe(q50, q52, q52, q53, t50, t51, t52, t53, time);
	}
	else if (time < t53) {
		p = FMath::CubicCRSplineInterpSafe(p51, p52, p53, p54, t51, t52, t53, t54, time);
		q = FMath::CubicCRSplineInterpSafe(q52, q52, q53, q54, t51, t52, t53, t54, time);
	}
	else if (time < t54) {
		p = FMath::CubicCRSplineInterpSafe(p52, p53, p54, p55, t52, t53, t54, t55, time);
		q = FMath::CubicCRSplineInterpSafe(q52, q53, q54, q55, t52, t53, t54, t55, time);
	}
	else if (time < t55) {
		p = FMath::CubicCRSplineInterpSafe(p53, p54, p55, p56, t53, t54, t55, t56, time);
		q = FMath::CubicCRSplineInterpSafe(q53, q54, q55, q56, t53, t54, t55, t56, time);
	}
	else if (time < t56) {
		p = FMath::CubicCRSplineInterpSafe(p54, p55, p56, p57, t54, t55, t56, t57, time);
		q = FMath::CubicCRSplineInterpSafe(q54, q55, q56, q57, t54, t55, t56, t57, time);
	}
	else if (time < t57) {
		p = FMath::CubicCRSplineInterpSafe(p55, p56, p57, p58, t55, t56, t57, t58, time);
		q = FMath::CubicCRSplineInterpSafe(q55, q56, q57, q58, t55, t56, t57, t58, time);
	}
	else if (time < t58) {
		p = FMath::CubicCRSplineInterpSafe(p56, p57, p58, p59, t56, t57, t58, t59, time);
		q = FMath::CubicCRSplineInterpSafe(q56, q57, q58, q59, t56, t57, t58, t59, time);
	}
	else if (time < t59) {
		p = FMath::CubicCRSplineInterpSafe(p57, p58, p59, p60, t57, t58, t59, t60, time);
		q = FMath::CubicCRSplineInterpSafe(q57, q58, q59, q60, t57, t58, t59, t60, time);
	}
	else if (time < t60) {
		p = FMath::CubicCRSplineInterpSafe(p58, p59, p60, p60, t58, t59, t60, t60+1.f, time);
		q = FMath::CubicCRSplineInterpSafe(q58, q59, q60, q60, t58, t59, t60, t60+1.f, time);
	}
	else {
		p = key60->GetRelativeLocation();
		q = FQuat(key60->GetRelativeRotation());

	}
	mesh1->SetRelativeLocationAndRotation(p, q);

	if (camera_actor) {
		FVector world_heli_p = mesh1->GetComponentLocation();
		camera_actor->SetActorLocation(world_heli_p + heli_to_cam);
	}
}

